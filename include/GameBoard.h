#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <vector>
#include <string>
#include "Personnage.h"
#include "CollisionManager.h"

enum Tuile 
{
	MUR, CAISSE, CIBLE, CAISSE_PLACEE, EMPTY_OUT, EMPTY_IN
};

enum Direction
{
	HAUT, BAS, GAUCHE, DROITE
};


class GameBoard
{
	protected :
		std::vector<std::vector<Tuile> > m_tuiles ; //représente le plateau de jeu sous forme d'un quadrillage. Le premier indice indique les abscisses et le 2e les ordonnées.
		Personnage m_personnage ; // le personnage et ses caractéristiques de position
		CollisionManager m_collisionManager ;

	public :
		GameBoard();
		GameBoard(int length, int height);

		void movePersonnage(Direction direction);

		//initilize the board for the first level
		void initLevel1();

};


#endif
