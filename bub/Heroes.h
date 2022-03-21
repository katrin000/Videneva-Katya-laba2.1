#pragma once
#include "Person.h"

class THeroes : public TPerson
{
public:
	THeroes();
	THeroes(THeroes& p); //копирование
	THeroes(double _strength, double _growth); //инициализация
	THeroes(THeroes&& p); //перемещение

	
	bool GetSmartHeroes();
	void SetSmartHeroes(bool n);
	void Goals();
	virtual void Print();
protected:
	bool smartHeroes;
};
