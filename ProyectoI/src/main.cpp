#include "Unit.h"
#include "Field.h"
#include "Cell.h"
#include <iostream>
#include "Player.h"

using namespace std;

int main(int argc, char const *argv[]) {
  Field * perro = new Field(6, 6);
  Player * perro1 = new Player(perro, 400);
  perro1->playfield = perro;
  perro1->playfield->print();
  perro->print();
  perro1->createArmy(1,2,3);
  perro1->randomPlace();
  perro->print();
  perro1->posUnits();
  perro1->play();
  cout << Unit::idCount << '\n';
  /* //Comprueba que todas alrededor son no pasables
  Field * perro = new Field(5, 6);
  for (size_t k = 0; k < 5+2; k++) {//R X C Y
    cout << perro->playfield[k][7].passable << "hasdsadas"<< '\n';
  }
  */
  return 0;
}
