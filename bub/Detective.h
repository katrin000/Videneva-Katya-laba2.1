#pragma once
#include "Person.h"
#include "Heroes.h"
class TDetective : public THeroes
{
public:
	double iq;
	double GetIq();
	void SetIq(double _iq);
	virtual void Print();

};

