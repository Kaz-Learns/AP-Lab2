#pragma once
#include <iostream>
#include <string>
#include "Weapon.h"
#include "Titan.h"

using namespace std;

class Character
{
private:
	string m_name;
	int m_health;
	Weapon* weapon[4];
	void DisplayInfo();

public:
	//Constructors
	Character() { setName(""); }
	Character(string cName, Weapon w) { setName(cName); }

	//Getters and Setters
	void setName(string cName) { m_name = cName; }
	string getName() const { return m_name; }
	void setHealth(int health);
	int getHealth() const;


};

