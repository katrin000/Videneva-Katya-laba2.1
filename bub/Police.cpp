#include "Police.h"

TPolice::TPolice():THeroes()
{
	help = true;
}

bool TPolice::GetHelp()
{
	return help;
}

void TPolice::SetHelp(bool h)
{
}

double TPolice::GetFriends()
{
	return 0.0;
}
