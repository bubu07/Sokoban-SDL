#ifndef VIEW_H
#define VIEW_H

/* La classe View est la classe qui va gérer l'affichage
 * C'est ici que tous les appels à la SDL seront gérés
 */

#include "GameBoard.h"

class View
{
	protected :
		GameBoard * m_gameBoard;

	public :
		//default constructor
		View();

		//creates a window 800*600
		View(int height = 600, int weight = 800);
		//Creates a window 800*600 and fill it according to the game board
		View(GameBoard *gb , int height = 600, int weight = 800);



};

#endif
