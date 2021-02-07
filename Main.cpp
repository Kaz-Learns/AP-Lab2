#include <iostream>
#include <string>
#include "Character.h"
#include "Titan.h"
#include "Hunter.h"
#include "Warlock.h"


using namespace std;

int main()
{
	Titan* titan = new Titan[5];
	Hunter* hunter = new Hunter[5];
	Warlock* warlock = new Warlock[5];
	

	Weapon Hawkmoon { "Hawkmoon", "Stalk thy prey and let loose thy talons upon the Darkness",
		"Paracasual Shot: Headshots grant stacks of Paracausal shot which increases weapon stability and range. The final shot of the magazine does bonus damage based on the amount of stacks.",
		70,30,20,20,20 };
	Weapon Thorn ("Thorn", "To rend one's enemies is to see them not as equals, but objects-hollow of spirit and meaning",
		"Mark of the Devourer: Shots have a burning effect on target, you gain a damage bonus after defeating an enemy with this weapon.",
		70, 30, 20, 20, 20);
	Weapon Ace("Ace of Spades", "Folding was never and option. -Cayde-6",
		"Memento Mori: Upon defeating an enemy with this weapon and reloading gain 6 shots of memento mori. Shots with this perk active deal more damage and have longer range.",
		70, 30, 20, 20, 20);
	Weapon TLW("The Last Word", "Yours, until the last flame dies and all words have been spoken.",
		"Fan Fire: Increased accuracy when firing at the hip, weapon fires in full auto",
		70, 30, 20, 20, 20);
	
	bool gameRunning = true;

	while (gameRunning)
	{
		int mainMenuSelect = 0;

		cout << "1. Create Character" << endl;
		cout << "2. View All Characters" << endl;
		cout << "3. Delete Character" << endl;
		cout << "4. Exit" << endl;

		cin >> mainMenuSelect;

		if (mainMenuSelect == 1)
		{
			int createMenuselect;

			cout << "Welcome to the Tower Gaurdian! It is time to pick your class and your first exotic weapon." << endl;
			cout << "Select your class: " << endl;
			cout << "1. Hunter" << endl;
			cout << "2. Titan" << endl;
			cout << "3. Warlock" << endl;
			cin >> createMenuselect;

			if (createMenuselect == 1)
			{
				string hname;
				cout << "Enter your Hunters name: " << endl;
				cin >> hname;
				hunter[0].setName(hname);
				cout << "These are you hunters abilities: " << endl;
				cout << "Player class and name: " << hunter[0].getClass() << " " << hunter[0].getName();
				cout << "Unique ability: " << hunter[0].getAbility() << endl;
				cout << "Unique attack: " << hunter[0].getAttack() << endl;
				cout << " " << endl;
			}

		}

		if (mainMenuSelect == 2)
		{

		}
		if (mainMenuSelect == 3)
		{

		}
		if (mainMenuSelect == 4)
		{
			gameRunning = false;
			return 0;
		}

		cout << "Welcome to the Tower Gaurdian! It is time to pick your class and your first exotic weapon." << endl;



	}

	

	
}