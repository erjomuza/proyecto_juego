#ifndef CAVALRY_H
#define CAVALRY_H

#include "Unit.h"

using namespace std;

//! Cavalry.h
/*!
  Esta clase hereda de la clase Unit, se encuentra al mismo nivel de las clases Lancer y Archey
*/
class Cavalry : public Unit {

    public:
        //! El constructor de la clase.
        /*!
        */
        Cavalry();
        //! El constructor con parametros.
        /*!
        */
        //Cavalry(/*PARAMETROS*/);
        //! El destructor de la clase.
        /*!
        */
        ~Cavalry();


    private:
    protected:
};

#endif /* CAVALRY_H */
