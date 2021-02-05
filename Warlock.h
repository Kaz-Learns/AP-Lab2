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
	Warlock() {};
	~Warlock() {};
	string getClass() { return m_wClass; }
	string getAbility() { return m_wAbility; }
	string getAttack() { return m_wAttack; }
	string getStats() { return m_wStats; }

};

#endif // _WARLOCK_H
