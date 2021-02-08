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
	Character(string cName, Weapon* w) 
	{ 
		setName(cName);
		setWeapon(w);
	}
	//member function
	virtual void DisplayInfo() const = 0; // Pure virtual function
	
	//Getters and Setters
	void setName(string cName) 
	{ 
		m_name = cName; 
	}
	virtual string getName() const
	{ 
		return m_name; 
	}
	
	void setWeapon(Weapon* w)
	{
		m_pWeapon = w;
	}
	virtual Weapon* getWeapon()
	{
		return m_pWeapon;
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
