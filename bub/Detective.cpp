
#include "Detective.h"
#include<stdlib.h>
#include <iostream>

double TDetective::GetIq()
{
    return 0.0;
}

void TDetective::SetIq(double _iq)
{
    if (_iq > 0)
        iq = _iq;
}

void TDetective::Print()
{
    std::cout << "Detective, IQ= \t " << this->GetIq() <<std::endl;
}
