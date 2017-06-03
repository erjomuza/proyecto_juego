#include "Archery.h"


Archery::Archery(){
  this->type='A';
  this->name="Arquero";
  this->maxHitPoints=15;
  this->hitPoints=15;
  this->attackPoints=5;
  this->defense=5;
  this->range=3;
  this->level=1;
  this->experience=0;
  this->movement=1;
  this->cost=4;
}

Archery::~Archery(){

}
