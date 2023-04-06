#include<iostream>

using namespace std;

class Player
{
public:
	int PlayerHP = 500;
	int PlayerMP = 500;
	int PlayerMove;
	void AttackPlayer(float AttackPoint)
	{
		
	}

	void MovePlayer()
	{
		
	}
};

class Monster
{
public:
	int MonsterHP;
	int MonsterMP;
	int MonsterMove;
	float AttackMonstar;
	
	int Slime()
	{
		MonsterHP = 50;
		MonsterMP = 50;
		AttackMonstar = 10;
	}
	int Goblin()
	{
		MonsterHP = 100;
		MonsterMP = 100;
		AttackMonstar = 50;
	}
	int Wildboar()
	{
		MonsterHP = 150;
		MonsterMP = 100;
		AttackMonstar = 100;
	}
};

