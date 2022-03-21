#include "Villain.h"
#include<stdlib.h>
#include <iostream>
#include "Person.h"

TVillain::TVillain() : TVillain(rand() % 100+10,rand() % 10000+10)
{
	
	for (int i = 0; i < hpCol; i++)
	{
		hp[i] = i;



	}
}

TVillain::TVillain(TVillain& p)
{
	strength = p.strength;
	growth = p.growth;
	hpCol = p.hpCol;
	hp = new int[hpCol];

	for (int i = 0; i < hpCol; i++)
	{
		hp[i] = p.hp[i];



	}

}

TVillain::TVillain(double _strength, double _growth):TPerson()
{
	SetStrength(_strength);
	SetGrowth(_growth);
}


TVillain:: TVillain(TVillain&& p)
{
	strength = p.strength;
	growth = p.growth;
	hpCol = p.hpCol;
	hp = p.hp;
	p.hp = 0;
	p.hpCol = 0;
}



void  TVillain::Print()
{
	std::cout << "Villain, growth= \t " << this->GetGrowth() << "\tStrength=\t" << this->GetStrength() << std::endl;
	std::cout << "Hp: ";
	for (int i = 0; i < hpCol; i++)
	{
		std::cout << hp[i] << "\t";


}
	std::cout<<std::endl;

}

void TVillain::Goals()
{
	strength += 10;
}
