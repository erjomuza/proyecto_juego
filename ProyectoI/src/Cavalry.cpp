#include "Cavalry.h"


Cavalry::Cavalry(){
  this->type='C';
  this->name="Caballeria";
  this->maxHitPoints=25;
  this->hitPoints=25;
  this->attackPoints=15;
  this->defense=5;
  this->range=1;
  this->level=1;
  this->experience=0;
  this->movement=3;
  this->cost=5;
}

Cavalry::~Cavalry(){

}
