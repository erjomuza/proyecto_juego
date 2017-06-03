#ifndef LANCER_H
#define LANCER_H

#include "Unit.h"

using namespace std;

//! Lancer.h
/*!
  Esta clase hereda de la clase Unit, se encuentra al mismo nivel de las clases Archery y Cavalry
*/
class Lancer : public Unit {

    public:
        //! El constructor de la clase.
        /*!
        */
        Lancer();
        //! El constructor con parametros.
        /*!
        */
        //Lancer(/*PARAMETROS*/);
        //! El destructor de la clase.
        /*!
        */
        ~Lancer();


    private:
    protected:
};

#endif /* LANCER_H */
