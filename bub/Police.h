#pragma once
#include "Person.h"
#include "Heroes.h"
class TPolice : public THeroes
{
public:
	TPolice();
	bool GetHelp();
	void SetHelp(bool h);
	double GetFriends();

protected:

	bool help;

};
