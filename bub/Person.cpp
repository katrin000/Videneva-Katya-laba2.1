#include "Person.h"
#include <new>
#include<stdlib.h>
#include <iostream>
#include "Book.h"

TPerson::TPerson()
{
	strength=0;
	growth=0;
    hpCol = 4;

	hp = new int[hpCol];
}



double TPerson::GetStrength()
{
	return 0.0;
}


double TPerson::GetGrowth()
{
	return 0.0;
}

int TPerson::GetHpCol()
{
	return 0;
}

int* TPerson::GetHp()
{
	return nullptr;
}

void TPerson::SetStrength(double _strength)
{
	if (_strength > 0)
		strength = _strength;
}

void TPerson::SetGrowth(double _growth)
{
	if (_growth > 0)
		growth = _growth;
}

void TPerson::SetHpCol(int _hpCol)
{
	if (_hpCol > 0)
	{
		int* temp = new int[_hpCol];
		for (int i = 0; i < (hpCol > _hpCol ? _hpCol : hpCol); i++)
		{
			temp[i] = hp[i];
		}
		delete[] hp;
		hp = temp;
		hpCol = _hpCol;
	}
		

}

void TPerson::SetHp(int _hp, int i)
{
	if (i >= 0 && i < hpCol)
	{
		hp[i] = _hp;
		
	}
}

void TPerson::Print()
{
}

void TPerson::Goals()
{
	strength -= 9;
}

TPerson::~TPerson()
{
	strength = 0;
	growth = 0;
	delete[] hp;
}