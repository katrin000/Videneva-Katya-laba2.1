#pragma once
#include "Person.h"

class THeroes : public TPerson
{
public:
	THeroes();
	THeroes(THeroes& p); //�����������
	THeroes(double _strength, double _growth); //�������������
	THeroes(THeroes&& p); //�����������

	
	bool GetSmartHeroes();
	void SetSmartHeroes(bool n);
	void Goals();
	virtual void Print();
protected:
	bool smartHeroes;
};
