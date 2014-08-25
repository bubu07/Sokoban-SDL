#include "Personnage.h"


Personnage::Personnage() : m_name("chibre"), m_indexX(0), m_indexY(0)
{
}

Personnage::Personnage(std::string name) : m_name(name), m_indexX(0), m_indexY(0)
{
}

Personnage::Personnage(int indexX, int indexY, std::string name) : m_name(name), m_indexX(indexX), m_indexY(indexY)
{
}

int Personnage::get_m_indexX()
{
	return m_indexX;
}

int Personnage::get_m_indexY()
{
	return m_indexY;
}

std::string Personnage::get_m_name()
{
	return m_name;
}

void Personnage::set_m_name(std::string name)
{
	m_name = name;
}

void Personnage::set_m_indexX(int X)
{
	m_indexX = X;
}

void Personnage::set_m_indexY(int y)
{
	m_indexY = y;
}
