/* Personnage.h
 * manage the personnage in the game
 */

#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <string>

class Personnage
{
	protected :
		std::string m_name;
		int m_indexX;
		int m_indexY

	public :
		Personnage();
		Personnage(std::string name);
		Personnage(int indexX, int indexY, std::string name = "zob");

		//Accessors
		int get_m_indexX();
		int get_m_indexY();
		std::string get_m_name();

		//mutators
		void set_m_indexX(int X);
		void set_m_indexY(int Y);
		void set_m_name(std::string name);



};


#endif

