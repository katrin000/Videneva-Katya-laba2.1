#pragma once
#include "Person.h"

class TVillain : public TPerson
{
public:
	TVillain();
	TVillain(TVillain& p); //�����������
	TVillain(double _strength, double _growth); //�������������

	TVillain(TVillain&& p); //�����������

	virtual void Print();
	void Goals();

};