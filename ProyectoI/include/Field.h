#ifndef FIELD_H
#define FIELD_H

#include <iostream>
#include "Cell.h"

using namespace std;

//! Field.h
/*!
  Modela el campo de juego .
*/
class Field {

    public:
        //! El constructor de la clase.
        /*!
        */
        Field();
        //! El constructor con parametros.
        /*!
        */
        Field(int c, int r);
        //! El destructor de la clase.
        /*!
        */
        void print();
        ~Field();
        Cell ** playfield;
        int cols;
        int rows;
    private:
    protected:
};

#endif /* FIELD_H */
