/*
Jersey Calderwood
6/5/2015
Project 1
Character Generator
*/

#include <iostream>
#include<string>

using namespace std;

class Gods
{
public:
	static int totalGods;
	Gods();
	~Gods();
	void SetMana(int Mana);
	int GetMana();
	void SetHealth(int Health);
	int GetHealth();
	void GodStats();

private:
	int Mana;
	int Health;
};

class AttackDamageCarry : public Gods
{
public:
	static int totalAttackDamageCarry;
	AttackDamageCarry();
	void SetAttackSpeedItem(string AttackSpeedItem);
	int GetPhysicalDamage();
	void SetLifesteal(string Lifesteal);
	string GetLifesteal();
	void AttackDamageCarryStats();

private:
	string PhysicalDamage;
	int m_PhysicalDamage;
	string Lifesteal;
	int m_Lifesteal;
};

class Guardian : public Gods
{
public:
	static int totalGuardian;
	Guardian();
	void GetCrowdControl (bool Cc);
	string SetCrowdControl ();
	void SetPhysicalresist( string Physicalresist);
	int GetPhysicalresist();
	void GuardianStats();

private:
	string CrowdControl;
	string Physicalresist;
	int m_Physicalresist;
};

char userMenu();