#pragma once
#include "Person.h"
class TBook
{
public:
	TBook();
	~TBook();
	void Print();
	void AddPerson(TPerson*person);
private:
	TPerson** persons;
	int personCount;

};
