#pragma once
#include "Person.h"

class TVillain : public TPerson
{
public:
	TVillain();
	TVillain(TVillain& p); //копирование
	TVillain(double _strength, double _growth); //инициализация

	TVillain(TVillain&& p); //перемещение

	virtual void Print();
	void Goals();

};