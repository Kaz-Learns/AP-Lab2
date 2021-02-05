#pragma once
#ifndef _HUNTER_H
#define _HUNTER_H

#include "Character.h"

class Hunter : public Character
{
private:
	string m_hClass = "Hunter";
	string m_hAbility = "Shadestep";
	string m_hAttack = "SmokeBomb";
	string m_hStats = "Plus 20 to mobility";

public:
	string getClass() { return m_hClass; }
	string getAbility() { return m_hAbility; }
	string getAttack() { return m_hAttack; }
	string getStats() { return m_hStats; }

};

#endif // !_HUNTER_H