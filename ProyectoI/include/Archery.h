#ifndef ARCHERY_H
#define ARCHERY_H

#include "Unit.h"

using namespace std;

//! Archery.h
/*!
  Esta clase hereda de la clase Unit, se encuentra al mismo nivel de las clases Lancer y Cavalry
*/

class Archery : public Unit {

    public:
        //! El constructor de la clase.
        /*!
        */
        Archery();
        //! El constructor con parametros.
        /*!
        */
        //Archery(/*PARAMETROS*/);
        //! El destructor de la clase.
        /*!
        */
        ~Archery();


    private:
    protected:
};

#endif /* ARCHERY_H */
