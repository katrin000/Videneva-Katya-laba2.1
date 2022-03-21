#include<iostream>
#include<stdlib.h>

#include "Person.h"
#include "Heroes.h"
#include "Villain.h"
#include "Book.h"
#include "Police.h"
#include "Criminal.h"
#include "Detective.h"


int main(int args, char** argv)
{

	THeroes police1;
    police1.SetGrowth(50);
	police1.SetStrength(170);
	THeroes police2 = police1; 
    THeroes police3(80, 200);
	police3.SetSmartHeroes(true);
	TPolice police4;
	police4.SetHelp(true);
	

	police3.Print();
	
	TVillain killer1;
	
	killer1.Print();
	TPerson* killer2 = new TVillain();
	
	//killer2->Print();
	
	//police3.Goals();
	//killer1.Goals();
	//killer2->Goals();
	TDetective Detective1;
	Detective1.SetIq(198);
	Detective1.Print();

	
	
	
	std::cout << "\n" << std::endl;

	
	



delete killer2;

	return 0;

}
