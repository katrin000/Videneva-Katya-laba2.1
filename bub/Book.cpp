#include "Book.h"
#include <iostream>
#include<stdlib.h>

TBook::TBook()
{
	personCount=0;
	persons = nullptr;
}

TBook::~TBook()
{
	if (persons!=nullptr)
		delete[] persons;
}

void TBook::Print()
{
	for (int i = 0; i < personCount; i++)
	{
		persons[i]->Print();
	}
}

void TBook::AddPerson(TPerson* person)
{
	if (personCount == 0)
	{
		persons = new TPerson * [1];
		personCount = 1;
		persons[0] = person;

	}
	else
	{

		TPerson** tmp = new TPerson*[personCount + 1];
		for (int i = 0; i < personCount; i++)
		{
			tmp[i] = persons[i];
		}


		delete[] persons;
		persons = tmp;
		persons[personCount] = person;
		personCount++;
	}
}