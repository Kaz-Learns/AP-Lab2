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
	string m_weaponName;
		 /*{"Hawkmoon","Thorn","Ace of Spades","The Last Word"};*/
	string m_weaponDisc;
							/*{ "Stalk thy prey and let loose thy talons upon the Darkness",
							"To rend one's enemies is to see them not as equals, but objects-hollow of spirit and meaning",
							"Folding was never and option. -Cayde-6",
							"Yours, until the last flame dies and all words have been spoken."};*/
	string m_speacialAbility;
	/*	{"Paracasual Shot: Headshots grant stacks of Paracausal shot which increases weapon stability and range. The final shot of the magazine does bonus damage based on the amount of stacks.",
		"Mark of the Devourer: Shots have a burning effect on target, you gain a damage bonus after defeating an enemy with this weapon. ",
		"Memento Mori: Upon defeating an enemy with this weapon and reloading gain 6 shots of memento mori. Shots with this perk active deal more damage and have longer range.  ",
		"Fan Fire: Increased accuracy when firing at the hip, weapon fires in full auto "};*/
	

public:
	string getWeaponName() 
	{
		return m_weaponName;
	}
	Weapon(string wn, string wd, string sa, int dm, int stab, int range, int handle, int reload)
	{
		m_weaponName = wn;
		m_weaponDisc = wd;
		m_speacialAbility = sa;
		m_weaponDamage = dm;
		m_weaponStability = stab;
		m_weaponRange = range;
		m_weaponHandling = handle;
		m_weaponReload = reload;
	}
	friend ostream& operator<<(ostream& out, const Weapon& W) {
		out << W.m_weaponName << ": " << W.m_weaponDisc << "\n" << endl
			<< "Weapon perk, " << W.m_speacialAbility << "\n" << endl
			<< "Weapon Stats: " << "\n" << endl
			<< "Damage: " << W.m_weaponDamage << endl
			<< "Range: " << W.m_weaponRange << endl
			<< "Stability: " << W.m_weaponStability << endl
			<< "Handling: " << W.m_weaponHandling << endl
			<< "Reload: " << W.m_weaponReload << endl;
		return out;
	}
};

