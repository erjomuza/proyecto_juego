#ifndef PLAYER_H
#define PLAYER_H

#include "Unit.h"
#include "Field.h"
#include "Cavalry.h"
#include "Archery.h"
#include "Lancer.h"
#include <iostream>
#include <random>
#include <ctime>


using namespace std;

//! Circulo.h
/*!
  Esta clase hereda de la clase Figura, se encuentra al mismo nivel de las clases Triangulo y Rectangulo.
*/
class Player {

    public:
        //! El constructor de la clase.
        /*!
        */
        Player();
        //! El constructor con parametros.
        /*!
        */
        Player(Field * a, int maxC);
        //! El destructor de la clase.
        /*!
        */
        ~Player();
        //! El constructor de la clase.
        /*!
        */
        void posUnits();
        //! El constructor de la clase.
        /*!
        */
        void randomPlace();
        //! crear ejercito
        /*! recibe tres enteros
        /*! cada uno Arqueros, lanceros y Caballeria
        */
        void createArmy(int A, int C, int L);
        //! hace el movimiento
        /*! de cada una de las Unidades
        /*! en el campo de juego
        */
        void play();//> si no se quiere hacer una accion (-1, -1)
        ///referencia al campo de juego
        Field * playfield;
    private:

    protected:
        ///Costo maximo del ejercito del jugador
        int maxCost;
        ///Unidades del jugador
        Unit ** army;
        ///nombre del jugador
        string name;
        ///puntaje acumulado del jugador
        int score;
        ///tamano del ejercito
        int armySize;
        ///Player count
        static int plCount;
        ///id jugador
        int idPlayer;
};

#endif /* PLAYER_H */
