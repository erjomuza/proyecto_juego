#ifndef UNIT_H
#define UNIT_H

#include "Unit.h"
#include <string>
#include "Cell.h"

using namespace std;
class Cell;
//! Circulo.h
/*!
  Esta clase hereda de la clase Figura, se encuentra al mismo nivel de las clases Triangulo y Rectangulo.
*/
class Unit {

    public:
        //! El constructor de la clase.
        /*!
        */
        Unit();
        //! El constructor que le asigna
        /*! las caracteristicas
        /*! dependiendo de "tipo"
        /*!
        /*!
        */
        Unit(char tipo);
        //! El destructor de la clase.
        /*!
        */
        ~Unit();
        //!
        /*!
        /*!
        /*!
        /*!
        */
        bool move(Cell ** celda, int x, int y);
        bool attack(Unit * a);
        int id;
        ///L=Lancero, C=Caballeria, A=Arquero
        char type;
        ///Nombre
        string name;
        ///posicion en X
        int posX;
        ///posicion en Y
        int posY;
        ///idCount
        static int idCount;
    protected:
        ///VIda max?
        int maxHitPoints;
        ///Vida actual?
        int hitPoints;
        ///Ataque
        int attackPoints;
        ///Defensa
        int defense;
        ///Rengo
        int range;
        ///nivel
        int level;
        ///Experiencia
        int experience;
        ///Capacidad de moverse
        int movement;
        ///costo
        static int cost;



    private:
};

#endif /* UNIT_H */
