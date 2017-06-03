#include "Unit.h"
#include "Field.h"
#include "Cell.h"

int Unit::idCount=0;
int Unit::cost;

Unit::Unit(){
    Unit::idCount++;
    this->id=idCount;
}

Unit::~Unit(){

}

bool Unit::move(Cell ** celda, int x, int y){
    int noPass=0;
    int numMov;
    int distanciaX=this->posX-x;
    int distanciaY=this->posY-y;
    std::cout << "X "<< x << " " << "Y "<< y << '\n';
    std::cout << "/* message */1" << '\n';
    if (celda[x+1][y+1].passable == false) {
      cout << "La celda de destino no es transitable" << '\n';
      return false;
    }
    std::cout << "/* message */2 x"<<this->posX-1<< " y"<< this->posY-1 << '\n';
    for (int i = this->posX-1; i < this->posX+1; i++) {
      for (int p = this->posY-1; p < this->posY+1; p++) {
        if (celda[i][p].passable == false) {
          noPass++;
        }
      }
    }
    if (noPass==9) {
      cout << "Esta unidad no se puede mover" << '\n';
      return false;
    }
    std::cout << "/* message */3" << '\n';
    if (this->movement < distanciaX || this->movement < distanciaY|| this->movement < (distanciaX+distanciaY)/2) {
      cout << "No se puede llegar a esa celda" << '\n';
      return false;
    }
    std::cout << "/* message */4" << '\n';
    celda[this->posX][this->posY].passable = true;
    std::cout << celda[this->posX][this->posY].passable << " 11111111"<<'\n';
    std::cout << "(" << this->posX << "," << this->posY<<")"<<'\n';
    celda[this->posX][this->posY].army = NULL;
    ///+1 por que los bordes no se pueden alcanzar
    this->posX=x+1;
    this->posY=y+1;
    celda[this->posX][this->posY].passable = false;
    celda[this->posX][this->posY].army = this;
    std::cout << celda[this->posX][this->posY].passable << " 211111111 "<<'\n';
    std::cout << "(" << this->posX << "," << this->posY<<")"<<'\n';
    return true;
}

bool Unit::attack(Unit * a){
  ///primero se comprueba el rango
  int distanciaX;
  int distanciaY;
  distanciaX = this->posX - a->posX;
  distanciaY = this->posX - a->posY;
  if (distanciaY+distanciaX >=  this->range) {
    cout << "No se puede atacar, esta fuera de rango" << '\n';
    return false;
  }
  if (this->attackPoints -  a->defense < 0) {
    cout << "El ataque fue inefectivo" << '\n';
    return true;
  }
  a->hitPoints -= this->attackPoints - a->defense;
  if (a->hitPoints < 1) {
    a = NULL;
  }
  return true;
}
