#ifndef CELL_H
#define CELL_H

#include "Unit.h"

using namespace std;

class Unit;
//! Circulo.h
/*!
  Esta clase hereda de la clase Figura, se encuentra al mismo nivel de las clases Triangulo y Rectangulo.
*/
class Cell {

    public:
        //! El constructor de la clase.
        /*!
        */
        Cell();
        //! El constructor con parametros.
        /*!
        */
        Cell(Unit * b);
        //! El constructor con parametros.
        /*!
        */
        Cell(bool p);
        //! El destructor de la clase.
        /*!
        */
        ~Cell();
        bool passable;
        Unit * army;

    private:

    protected:

};

#endif /* CELL_H */
