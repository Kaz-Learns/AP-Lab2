#pragma once
#ifndef _TITAN_H
#define _TITAN_H
#include <iostream>
#include <string>
#include "Character.h"

class Titan : public Character
{
private:
	string m_tClass = "Titan";
	string m_tAbility = "Barricade";
	string m_tAttack = "Shoulder Charge";
	string m_tStats = "Plus 20 to resilience";

public:
	Titan(string cName, Weapon* w, string race) : Character(cName, w)
	{
		setRace(race);


	};

	// Member Functions
	void setRace(string race)
	{
		this->m_tClass = race;
	}

	string getRace()const
	{
		return m_tClass;
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
	string getClass() const { return m_tClass; }
	string getAbility() const { return m_tAbility; }
	string getAttack() const { return m_tAttack; }
	string getStats() const { return m_tStats; }

};

#endif // _TITAN_H