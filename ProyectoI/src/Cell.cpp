#include "Cell.h"


Cell::Cell(){
  this->passable = true;
}
Cell::Cell(Unit * b){
    this->army=b;
    ///Si realmente hay una unidad, no es passable
    if (b!=NULL) {
      passable=false;
    }
}
Cell::Cell(bool p){
  this->passable=p;
  ///Si no es terreno franquable entonces p=false
  if(p==false){
    this->army=NULL;
  }
}

Cell::~Cell(){

}
