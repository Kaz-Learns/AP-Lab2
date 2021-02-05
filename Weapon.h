#pragma once
#include <iostream>
#include <string>

using namespace std;

class Weapon
{
private:
	string m_weaponName[4] = {"Hawkmoon","Thorn","Ace of Spades","The Last Word"};
	string m_weaponDisc[4] = {"Stalk thy prey and lewt loose thy talons upon the Darkness",
							"To rend one's enemies is to see them not as equals, but objects-hollow of spirit and meaning",
							"Folding was never and option. -Cayde-6",
							"Yours, until the last flame dies and all words have been spoken."};
	int m_weaponDamage[4] = {};
	int m_weaponStability[4] = {};
	int m_weaponRange[4] = {};
	int m_weaponHandling[4] = {};
	int m_weaponReload[4] = {};
	string m_speacialAbility[4] = 
		{"Paracasual Shot: Headshots grant stacks of Paracausal shot which increases weapon stability and range. The final shot of the magazine does bonus damage based on the amount of stacks.",
		"Mark of the Devourer: Shots have a burning effect on target, you gain a damage bonus after defeating an enemy with this weapon. ",
		"Memento Mori: Upon defeating an enemy with this weapon and reloading gain 6 shots of memento mori. Shots with this perk active deal more damage and have longer range.  ",
		"Fan Fire: Increased accuracy when firing at the hip, weapon fires in full auto "};


public:
};

