#pragma once
#include <iostream>
#include <string>

using namespace std;

class Weapon 
{
private:
	int m_weaponDamage;
	int m_weaponStability;
	int m_weaponRange;
	int m_weaponHandling;
	int m_weaponReload;
	int m_weaponRpm;
	string m_weaponName;
	string m_weaponDisc;
	string m_speacialAbility;

public:
	
	Weapon(string wn, string wd, string sa, int dm, int stab, int range, int handle, int reload, int rpm)
	{
		m_weaponName = wn;
		m_weaponDisc = wd;
		m_speacialAbility = sa;
		m_weaponDamage = dm;
		m_weaponStability = stab;
		m_weaponRange = range;
		m_weaponHandling = handle;
		m_weaponReload = reload;
		m_weaponRpm = rpm;
	}
	string getWeaponName()
	{
		return m_weaponName;
	}
	friend ostream& operator<<(ostream& out, const Weapon& W) 
	{
		out << W.m_weaponName << ": " << W.m_weaponDisc << "\n" << endl
			<< "Weapon perk, " << W.m_speacialAbility << "\n" << endl
			<< "Weapon Stats: " << "\n" << endl
			<< "Damage: " << W.m_weaponDamage << endl
			<< "Range: " << W.m_weaponRange << endl
			<< "Stability: " << W.m_weaponStability << endl
			<< "Handling: " << W.m_weaponHandling << endl
			<< "Reload: " << W.m_weaponReload << endl
			<< "Rounds Per Minute: " << W.m_weaponRpm << endl
			<< " \n" << endl;
		return out;
	}
};

