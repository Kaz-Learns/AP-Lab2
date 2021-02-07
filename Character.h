#pragma once
#ifndef _CHARACTER_H
#define _CHARACTER_H
#include <iostream>
#include <string>
#include "Weapon.h"


using namespace std;

class Character
{
private:
	string m_name = " ";
	int m_health = 0;
	int m_size = 5;
	Weapon* m_pWeapon;

public:
	//Constructors
	Character() {};
	//Character() { setName(""); }
	Character(string cName, Weapon w) { setName(cName); }

	void setWeapon(Weapon w)
	{
		*m_pWeapon = w;
	}
	Weapon getWeapon()
	{
		return *m_pWeapon;
	}
	//member function
	//virtual void DisplayInfo();

	//Getters and Setters
	void setName(string cName) 
	{ 
		m_name = cName; 
	}
	string getName() const 
	{ 
		return m_name; 
	}
	void setHealth(int health)
	{
		m_health = health;
	}
	int getHealth() const
	{
		return m_health;
	}


};

#endif // _CHARACTER_H
