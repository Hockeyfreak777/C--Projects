/*
Jersey Calderwood
6/5/2015
Project 1
Character Generator
*/

#include <iostream>
#include<string>
#include "Gods.h"


using namespace std;

Gods::Gods()
{
	cout << "\nInside Smite God Constructor\n";
	totalGods++;
}

Gods::~Gods()
{
	cout << "Destructor" << endl;
}

void Gods::SetMana(int Mana)
{
	cout << "Enter the Mana for the God" << endl;
	cin >> Mana;
	Mana = Mana;
}

int Gods::GetMana()
{
	return Mana;
}

void Gods::SetHealth(int Health)  // Sets the health of the Gods
{
	cout << "\nEnter the health for the God:\n";
	cin >> Health;
	Health = Health;
}

int Gods::GetHealth()  // Returns the health of the God
{
	return Health;
}
void Gods::GodStats()
{
	system("pause");
	system("cls");
	cout << "\nYour God can deal " << GetMana() << " damage.\n";
	cout << "\nYour God has " << GetHealth() << " health.\n";
}


AttackDamageCarry::AttackDamageCarry()   // Constructor
{
	cout << "\nInside the ADC Character Type.\n\n";
	totalGods++;
}

void AttackDamageCarry::SetAttackSpeedItem(string AttackSpeedItem)  //Asks the user to choose a attack damage item for the ADC
{
	cout << "\nWhich AP item would you like to equip your God with: (Devourer's Gauntlet, Rage, or  Deathbringer)";
	cin.ignore();
	getline(cin, AttackSpeedItem);
	if (AttackSpeedItem != "Devourer's Gauntlet" || AttackSpeedItem != "Rage" || AttackSpeedItem != "Deathbringer")
	{
		cout << "Incorrect item entered. Please enter Devourer's Gauntlet, Rage, or  Deathbringer";
		cin.ignore();
		getline(cin, AttackSpeedItem);
		AttackSpeedItem = PhysicalDamage;
	}
}

int AttackDamageCarry::GetPhysicalDamage()
{
	if (Lifesteal == "Devourer's Gauntlet")
	{
		m_Lifesteal = 25;
	}
	else if (PhysicalDamage == "Rage")
	{
		m_PhysicalDamage = 30;
	}
	else if (PhysicalDamage == "Deathbringer")
	{
		m_PhysicalDamage = 50;
	}
	return m_PhysicalDamage;
}



void AttackDamageCarry::AttackDamageCarryStats()  //Displays information about the mage
{
	system("pause");
	system("cls");
	cout << "\nYour Mage can deal " << GetMana() << " damage.\n";
	cout << "\nYour Mage has " << GetHealth() << " health.\n";
	
}


Guardian::Guardian()
{
	cout << "\nInside the Guardian Character Type.\n";
	totalGuardian++;
}

void Guardian::SetPhysicalresist(string Physicalresist)		//Asks the user to enter a type of armor for the champion
{
	cout << "Assign an armor for your tank: (Watcher's Gift, Stone of Gaia, or Mystical Mail) ";
	cin.ignore();
	getline(cin, Physicalresist);
	if (Physicalresist != "Watcher's Gift" || Physicalresist != "Stone of Gaia" || Physicalresist != "Mystical Mail")
	{
		cout << "Incorrect item entered. Please enter Watcher's Gift, Stone of Gaia, or Mystical Mail";
		cin.ignore();
		getline(cin, Physicalresist);
		Physicalresist = m_Physicalresist;
	}
}

int Guardian::GetPhysicalresist()
{
	if (Physicalresist == "Watcher's Gift")
	{
		m_Physicalresist = 100;
	}
	else if (Physicalresist == "Stone of Gaia")
	{
		m_Physicalresist = 70;
	}
	else if (Physicalresist == "Mystical Mail")
	{
		m_Physicalresist = 300;
	}
	return m_Physicalresist;
}


void Guardian::GuardianStats()  //Displays information about the tiger
{
	system("pause");
	system("cls");
	cout << "\nYour Tank can deal " << GetMana() << " damage.\n";
	cout << "\nYour Tank has " << GetHealth << " health.\n";
}

char userMenu()
{
	char numValue;  //Makes numValue a character
	cout << "\nEnter the number of what you would like to do:\n1. Modify the Champion\n2. Add a Mage\n3. Add a Tank\n4. See how mamy champions you have created\n";
	cout << "What would you like to do?(1/2/3/4) - ";  //Asks user what they want to do.
	cin >> numValue;  //Receives the user input
	cin.ignore();
	return numValue;  //Returns the user input