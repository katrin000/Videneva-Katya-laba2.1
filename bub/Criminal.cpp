#include "Criminal.h"
#include<stdlib.h>
#include "Villain.h"
#include <iostream>


double TCriminal::GetWeapon()
{
    return 0.0;
}

void TCriminal::SetWeapon(double _we)
{
    if (_we > 0)
        weapon = _we;
}

void TCriminal::Print()
{
    std::cout << "Criminal, Weapon= \t " << this->GetWeapon() << std::endl;
}
