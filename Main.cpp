#include <iostream>
#include <string>
#include "Character.h"
#include "Titan.h"
#include "Hunter.h"
#include "Warlock.h"


using namespace std;

int main()
{
	const int NUM_CHARACTERS = 50;
	Character* pCharacter[NUM_CHARACTERS];
	
	/*Titan* titan = new Titan[5];
	Hunter* hunter = new Hunter[5];
	Warlock* warlock = new Warlock[5];*/
	
	Weapon* pWeapon[4]
	{ pWeapon[0] = new Weapon("Hawkmoon", "Stalk thy prey and let loose thy talons upon the Darkness",
	"Paracasual Shot: Headshots grant stacks of Paracausal shot which increases weapon stability and range. The final shot of the magazine does bonus damage based on the amount of stacks.",
	78,76,55,83,63, 140),
	pWeapon[1] = new Weapon("Thorn", "To rend one's enemies is to see them not as equals, but objects-hollow of spirit and meaning",
	"Mark of the Devourer: Shots have a burning effect on target, you gain a damage bonus after defeating an enemy with this weapon.",
	84, 60, 41, 68, 46, 150),
	pWeapon[2] = new Weapon("Ace of Spades", "Folding was never and option. -Cayde-6",
	"Memento Mori: Upon defeating an enemy with this weapon and reloading gain 6 shots of memento mori. Shots with this perk active deal more damage and have longer range.",
	84, 46, 78, 46, 48, 140),
	pWeapon[3] = new Weapon("The Last Word", "Yours, until the last flame dies and all words have been spoken.",
	"Fan Fire: Increased accuracy when firing at the hip, weapon fires in full auto",
	78, 46, 28, 28, 82, 225) };

	
	int characterCount = 0;

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
			system("CLS");

			int createMenuselect;

			cout << "Welcome to the Tower Gaurdian! It is time to pick your class and your first exotic weapon." << endl;
			cout << "Select your class: " << endl;
			cout << "1. Hunter" << endl;
			cout << "2. Titan" << endl;
			cout << "3. Warlock" << endl;
			cin >> createMenuselect;

			if (createMenuselect == 1)
			{
				int hweaponSelectMenu;
				string hname;
				
				cout << "Enter your Hunter's name: " << endl;
				cin >> hname;
				
				cout << "Select a weapon: " << endl;
				cout << "1. Hawkmoon" << "\n" << endl;
				cout << "2. Thorn" << "\n" << endl;
				cout << "3. Ace of Spades" << "\n" << endl;
				cout << "4. The Last Word" << "\n" << endl;
				cin >> hweaponSelectMenu;
				if (hweaponSelectMenu == 1)
				{
					
					pCharacter[characterCount] = new Hunter(hname, pWeapon[0], "Hunter");
					cout << *pWeapon[0];
					characterCount++;
				}
				else if (hweaponSelectMenu == 2)
				{
					
					pCharacter[characterCount] = new Hunter(hname, pWeapon[1], "Hunter");
					cout << *pWeapon[1];
					characterCount++;
					
				}
				else if (hweaponSelectMenu == 3)
				{
					
					pCharacter[characterCount] = new Hunter(hname, pWeapon[2], "Hunter");
					cout << *pWeapon[2];
					characterCount++;
				}
				else if (hweaponSelectMenu == 4)
				{
					
					pCharacter[characterCount] = new Hunter(hname, pWeapon[3], "Hunter");
					cout << *pWeapon[3];
					characterCount++;
				}
				else
				{
					cout << "Invalid selection... You will be assigned a Hawkmoon" << endl;
					hweaponSelectMenu = 1;
				}
				cout << "Player class and name: " << pCharacter[characterCount - 1]->getName() << endl;

				cout << "These are you hunters abilities: " << endl;
				pCharacter[characterCount - 1]->DisplayInfo();

			}
			else if (createMenuselect == 2)
			{
				system("CLS");

				//Titan creation
				int tweaponSelectMenu;
				string hname;

				cout << "Enter your Titan's name: " << endl;
				cin >> hname;

				cout << "Select a weapon: " << endl;
				cout << "1. Hawkmoon" << "\n" << endl;
				cout << "2. Thorn" << "\n" << endl;
				cout << "3. Ace of Spades" << "\n" << endl;
				cout << "4. The Last Word" << "\n" << endl;
				cin >> tweaponSelectMenu;
				if (tweaponSelectMenu == 1)
				{

					pCharacter[characterCount] = new Titan(hname, pWeapon[0], "Titan");
					cout << *pWeapon[0];
					characterCount++;
				}
				else if (tweaponSelectMenu == 2)
				{

					pCharacter[characterCount] = new Titan(hname, pWeapon[1], "Titan");
					cout << *pWeapon[1];
					characterCount++;

				}
				else if (tweaponSelectMenu == 3)
				{

					pCharacter[characterCount] = new Titan(hname, pWeapon[2], "Titan");
					cout << *pWeapon[2];
					characterCount++;
				}
				else if (tweaponSelectMenu == 4)
				{

					pCharacter[characterCount] = new Titan(hname, pWeapon[3], "Titan");
					cout << *pWeapon[3];
					characterCount++;
				}
				else
				{
					cout << "Invalid selection... You will be assigned a Hawkmoon" << endl;
					tweaponSelectMenu = 1;
				}
				cout << "Player class and name: " << pCharacter[characterCount - 1]->getName() << endl;

				cout << "These are you hunters abilities: " << endl;
				pCharacter[characterCount - 1]->DisplayInfo();

			}
			else if (createMenuselect == 3)
			{
				system("CLS");

				int wweaponSelectMenu;
				string hname;

				cout << "Enter your Warlock's name: " << endl;
				cin >> hname;

				cout << "Select a weapon: " << endl;
				cout << "1. Hawkmoon" << "\n" << endl;
				cout << "2. Thorn" << "\n" << endl;
				cout << "3. Ace of Spades" << "\n" << endl;
				cout << "4. The Last Word" << "\n" << endl;
				cin >> wweaponSelectMenu;
				if (wweaponSelectMenu == 1)
				{
					system("CLS");
					pCharacter[characterCount] = new Warlock(hname, pWeapon[0], "Warlock");
					cout << *pWeapon[0];
					characterCount++;
				}
				else if (wweaponSelectMenu == 2)
				{
					system("CLS");
					pCharacter[characterCount] = new Warlock(hname, pWeapon[1], "Warlock");
					cout << *pWeapon[1];
					characterCount++;

				}
				else if (wweaponSelectMenu == 3)
				{
					system("CLS");
					pCharacter[characterCount] = new Warlock(hname, pWeapon[2], "Warlock");
					cout << *pWeapon[2];
					characterCount++;
				}
				else if (wweaponSelectMenu == 4)
				{
					system("CLS");
					pCharacter[characterCount] = new Warlock(hname, pWeapon[3], "Warlock");
					cout << *pWeapon[3];
					characterCount++;
				}
				else
				{
					system("CLS");
					cout << "Invalid selection... You will be assigned a Hawkmoon" << endl;
					wweaponSelectMenu = 1;
				}
				cout << "Player class and name: " << pCharacter[characterCount - 1]->getName() << endl;

				cout << "These are you hunters abilities: " << endl;
				pCharacter[characterCount - 1]->DisplayInfo();

			}
			else
			{
				cout << "Invalid selections" << endl;
			}
		}

		if (mainMenuSelect == 2)
		{
			system("CLS");

			cout << "Here are you Characters: \n" << endl;

			for (int i = 0; i < characterCount; i++)
			{
				pCharacter[i]->DisplayInfo();
			}
		}
		if (mainMenuSelect == 3)
		{
			system("CLS");
			int deleteSelection;

			cout << "Choose Character to delete: " << endl;


			for (int i = 0; i < characterCount; i++)
			{
				if (i < characterCount)
				{
					cout << "Would you like to delete this character? " << endl;
					cout << "1. Yes " << endl;
					cout << "2. No" << endl;

					cout << pCharacter[i]->getName();
					cin >> deleteSelection;

					if (deleteSelection == 1)
					{
						delete pCharacter[i];
						for (int j = i; j < characterCount; j++)
						{
							pCharacter[j] = pCharacter[j + 1];
						}
						characterCount--;
					}
				}
				else
				{
					cout << "No Characters to delete, create a character first..." << endl;
				}
				
			}

		}
		if (mainMenuSelect == 4)
		{
			gameRunning = false;
			return 0;
		}

		cout << "Welcome to the Tower Gaurdian! It is time to pick your class and your first exotic weapon." << endl;



	}

	

	
}