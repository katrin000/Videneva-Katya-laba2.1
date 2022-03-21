#include "Heroes.h"
#include <iostream>
#include<stdlib.h>
#include "Person.h"

THeroes::THeroes() : THeroes(rand() % 200, rand() % 50000)

{
	smartHeroes = false;
}

THeroes::THeroes(THeroes& p)
{
	strength = p.strength;
	growth= p.growth;
		hpCol = p.hpCol;
		hp = new int[hpCol];

		for (int i = 0; i < hpCol; i++)
		{
			hp[i] = p.hp[i];



 }
		smartHeroes = p.smartHeroes;
}

THeroes::THeroes(double _strength, double _growth):TPerson()
{
	SetStrength(_strength);
	SetGrowth(_growth);
	smartHeroes = false;
}





THeroes::THeroes(THeroes&& p)
{
	strength = p.strength;
	growth = p.growth;
	hpCol = p.hpCol;
	hp = p.hp;
	p.hp = 0;
	p.hpCol = 0;
	smartHeroes = p.smartHeroes;
}

void THeroes::Print()
{
	std::cout << "Heroes, growth= \t " << this->GetGrowth() << "\tStrength=\t" << this->GetStrength() <<
	 ((smartHeroes == true) ? "\nsmartHeroes" : "\nstrongHeroes") << std::endl;
}

bool THeroes::GetSmartHeroes()
{
	return smartHeroes;
}

void THeroes::SetSmartHeroes(bool n)
{
}

void THeroes::Goals()
{
	strength += 189;
}

 