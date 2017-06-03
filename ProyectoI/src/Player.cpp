#include "Player.h"

int Player::plCount = 0;
Player::Player(){
  Player::plCount++;
  this->idPlayer=Player::plCount;
}
Player::Player(Field * a, int maxC){
  this->playfield = a;
  this->maxCost = maxC;
  Player::plCount++;
  this->idPlayer=Player::plCount;
}

Player::~Player(){

}

void Player::createArmy(int A, int C, int L){
    if (L*3+C*5+A*4 > this->maxCost) {
      cout << "Excede el maximo" << '\n';
      return;
    }
    this->army = new Unit*[A+C+L];
    for (size_t i = 0; i < A; i++) {
      this->army[i]= new Archery;
    }
    for (size_t i = A; i < C+A; i++) {
      this->army[i]= new Cavalry;
    }
    for (size_t i = C+A; i < C+A+L; i++) {
      this->army[i]= new Lancer;
    }
    this->armySize=A+C+L;
}

void Player::play(){
    char a;
    int x_move;
    int y_move;
    bool mov;
    Cell ** celdaAso;
    for (size_t i = 0; i < armySize; i++) {
      cout << "Unit" << this->army[i]->name << " " << i << '\n';
      cout << "move?(y or n)" << '\n';
      cin >> a;
      celdaAso = this->playfield->playfield;
      if (a=='y') {
        cout << "where in x?" << '\n';
        cin >> x_move;
        cout << "where in y?" << '\n';
        cin >> x_move;
        if (x_move == -1 && y_move == -1) {
          continue;
        }
        if (!mov) {
          cout << "No se puede mover a dicha posicion, intente de nuevo" << '\n';
          i--;
        }
      }
    }
}

void Player::posUnits(){
  int x_move;
  int y_move;
  bool mov;
  Cell ** celdaAso = this->playfield->playfield;;
  cout << "Puede poner unidades desde la columna 0 hasta " << this->playfield->cols/4 << '\n';
  for (size_t i = 0; i < armySize; i++) {
    cout << "Unit" << this->army[i]->name << " " << i << '\n';
    cout << "Adonde in x?" << '\n';
    cin >> x_move;
    cout << "Adonde in y?" << '\n';
    cin >> y_move;
    if (x_move == -1 && y_move == -1) {
      continue;
    }
    this->army[i]->posX=x_move+1;
    this->army[i]->posY=y_move+1;
    mov = this->army[i]->move(celdaAso, x_move, y_move);
    if (mov==false) {
      cout << "No se puede mover a dicha posicion, intente de nuevo" << '\n';
      i--;
    }
  }
}
void Player::randomPlace(){
  int minReach;
  int reach;
  int randX;
  int randY;
  bool mov;
  if (this->idPlayer == 1) {
    minReach=0;
    reach = this->playfield->cols/4;
  }else{
    minReach=this->playfield->cols - this->playfield->cols/4;
    reach = this->playfield->cols;
  }
  srand(time(NULL));
  cout << rand() << '\n';
  std::cout << "X "<< randX << " " << "Y "<<randY << '\n';
  for (size_t i = 0; i < this->armySize; i++) {
    randY = rand()%(reach - minReach) + minReach;
    randX = rand()%(this->playfield->rows);
    std::cout << "/* message */" << '\n';
    this->army[i]->posX=randX+1;
    this->army[i]->posY=randY+1;
    mov = this->army[i]->move(this->playfield->playfield, randX, randY);
    if (!mov) {
      i--;
    }
  }

}
