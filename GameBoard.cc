/*
 * class GameBoard :
 * It's the Model part of the program (considering the MVC pattern)
 * modelize the game board and have functions to actualize its state
 * depending on the event it receives
 */

#include "GameBoard.h"

GameBoard::GameBoard() : m_personnage(), m_collisionManager()
{
}

GameBoard::GameBoard(int length, int height) : m_personnage(), m_collisionManager()
{
	m_tuiles.resize(length);
	for(unsigned int i = 0 ; i < length ; ++i)
	{
		m_tuiles[i].resize(height);
	}
}

void GameBoard::initLevel1()
{
	int verticalOffset = 10;
	int horizontalOffset = 5;
	for(unsigned int i = 0 ; i < 0 + 7 ; ++i)
	{
		m_tuiles[horizontalOffset + i][verticalOffset] = MUR;
		m_tuiles[horizontalOffset + i][verticalOffset + 3] = MUR;
	}

	m_tuiles[horizontalOffset + 2][verticalOffset + 1] = CAISSE;
		
	for(unsigned int i = 0 ; i < 5 ; ++i)
	{

	}

	//set personnage start position
	m_personnage.set_m_X(horizontalOffset + 1);
	m_personnage.set_m_Y(verticalOffset + 1);
}
		

