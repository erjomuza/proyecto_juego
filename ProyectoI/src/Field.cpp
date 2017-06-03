
#include "Field.h"


Field::Field(){

}
//! El constructor con parametros.
/*! Hace un arreglo 2D de tipo Cell
/*! del tamano que entra por parametros
/*! mas un borde
*/
Field::Field(int r, int c){
  this->cols=c;
  this->rows=r;
  this->playfield =  new Cell*[r+2];
  for (size_t i = 0; i < r+2; i++) {
    this->playfield[i] = new Cell[c+2];
  }
  int a=0;
  for (size_t k = 0; k < c+2; k++) {//R X C Y
    this->playfield[a][k].passable = false;
  }
  a=r+1;
  for (size_t k = 0; k < c+2; k++) {
    this->playfield[a][k].passable = false;
  }
  a=0;
  for (size_t i = 0; i < r+2; i++) {
    this->playfield[i][a].passable = false;
  }
  a=c+1;
  for (size_t i = 0; i < r+2; i++) {
    this->playfield[i][a].passable = false;
  }
}

Field::~Field(){

}
void Field::print(){
  bool p;
  int units;
  for (size_t i = 0; i < this->rows+2; i++) {
    for (size_t j = 0; j < this->cols+2; j++) {
      bool p =this->playfield[i][j].passable;
      std::cout << p << " ";
      if (this->playfield[i][j].army == NULL) {
        std::cout << "N" << ' ';
      }else{
        std::cout << "Y" << ' ';
        units++;
      }
    }
    std::cout << i << '\n';
    cout << '\n';
  }
  std::cout << "units " << units << '\n';
}
