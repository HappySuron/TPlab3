#pragma once
class Progr
{
public:
	Progr() {};
	virtual ~Progr() {};
	virtual double find_summ(int n) = 0;

	virtual double get_first()=0;
	virtual double get_step() = 0;
	virtual int get_type() = 0;
};

