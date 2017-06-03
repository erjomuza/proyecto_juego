#include "Lancer.h"


Lancer::Lancer(){
  this->type='L';
  this->name="Lancero";
  this->maxHitPoints=20;
  this->hitPoints=20;
  this->attackPoints=7;
  this->defense=7;
  this->range=1;
  this->level=1;
  this->experience=0;
  this->movement=1;
  this->cost=3;
}

Lancer::~Lancer(){

}
