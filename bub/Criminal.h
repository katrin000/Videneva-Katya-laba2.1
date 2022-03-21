#pragma once
#include "Person.h"
#include "Villain.h" 
class TCriminal : public TVillain
{
	double weapon;
	double GetWeapon();
	void SetWeapon(double _we);
	virtual void Print();


};
