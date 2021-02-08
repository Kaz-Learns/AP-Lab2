#pragma once
#ifndef _HUNTER_H
#define _HUNTER_H
#include "Character.h"
#include <iostream>
#include <string>

class Hunter : public Character
{
private:
	string m_hClass = "Hunter";
	string m_hAbility = "Shadestep";
	string m_hAttack = "SmokeBomb";
	string m_hStats = "Plus 20 to mobility";

public:
	
	Hunter(string cName, Weapon* w, string race) : Character(cName, w)
	{
		setRace(race);
		
		
	};

	// Member Functions
	void setRace(string race) 
	{ 
		this->m_hClass = race; 
	}
	
	string getRace()const 
	{ 
		return m_hClass; 
	}
	string getName() const
	{
		return getRace() + " " + Character::getName();
	}
	virtual void DisplayInfo() const
	{
		cout << "\n " << endl
			<< "Character Name:  " << Character::getName() << endl
 			<< "Character Class: " << getClass() << endl
			<< "Special Ability: " << getAbility() << endl
			<< "Attack:          " << getAttack() << endl
			<< "Stat Boost:      " << getStats() << endl;
	}

	// Getters and Setters
	string getClass() const { return m_hClass; }
	string getAbility() const { return m_hAbility; }
	string getAttack() const { return m_hAttack; }
	string getStats() const { return m_hStats; }

};

#endif // !_HUNTER_H