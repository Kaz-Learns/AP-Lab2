#pragma once
#ifndef _WARLOCK_H
#define _WARLOCK_H
#include "Character.h"
class Warlock : public Character
{
private:
	string m_wClass = "Warlock";
	string m_wAbility = "Healing Rift";
	string m_wAttack = "Celestial Fire";
	string m_wStats = "Plus 20 to recovery";

public:
	Warlock(string cName, Weapon* w, string race) : Character(cName, w)
	{
		setRace(race);


	};

	// Member Functions
	void setRace(string race)
	{
		this->m_wClass = race;
	}

	string getRace()const
	{
		return m_wClass;
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
	string getClass() const { return m_wClass; }
	string getAbility() const { return m_wAbility; }
	string getAttack() const { return m_wAttack; }
	string getStats() const { return m_wStats; }

};

#endif // _WARLOCK_H
