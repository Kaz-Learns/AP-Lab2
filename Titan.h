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
	Titan() {};
	/*Titan(string cname, Weapon w, string race) :Character(cname, w)
	{
		setTitle(race);
	}*/

	/*void setTitle(string race) { this->m_tClass = race; }*/
	/*virtual string getName()const { return m_tClass + "" + Character::getName(); }*/
	string getAbility() { return m_tAbility; }
	string getAttack() { return m_tAttack; }
	string getStats() { return m_tStats; }

};

#endif // _TITAN_H