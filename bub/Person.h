#pragma once

class TPerson
{

public:
	TPerson();
	~TPerson();
	double GetStrength();
	double GetGrowth();
	int GetHpCol();
	int* GetHp();
	void SetStrength(double _strength);
	
	void SetGrowth(double _growth);
	
	void SetHpCol(int _HpCol);
	
	void SetHp(int _Hp, int i);
	
	virtual void Print();

	void Goals();

protected:
	double strength;
	double growth;
	int hpCol;
	int* hp;




};
