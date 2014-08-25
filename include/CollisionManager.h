/* CollisionManager has to detect the collision between personnage and object
 * and inter objects when the personnage tries a move
 */

#ifndef COLLISIONMANAGER_H
#define COLLISIONMANAGER_H

#include "GameBoard.h"

class CollisionManager
{
	protected :
		GameBoard	m_gameBoard;
	public :
		CollisionManager();
		CollisionManager(GameBoard gameBoard);

		bool movePersonnage(Direction dir);
		bool moveCaisse(Direction dir);


};



 #endif
