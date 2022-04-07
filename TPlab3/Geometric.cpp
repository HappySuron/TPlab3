#include "Geometric.h"
#include <cmath>
#include <fstream>

Geometric::Geometric() {
	this->first = 1;
	this->step = 3;
}


Geometric::Geometric(double first, double step) {
	this->first = first;
	this->step = step;
}

Geometric::~Geometric (){
	delete this;
}

double Geometric::find_summ(int n) {
	double Summ = 0;
	if ((this->step) != 1) {
		Summ = ((this->first) * (pow((this->step), n) - 1)) / ((this->step) - 1);
	}
	else
	{
		Summ = n * (this->first);
	}
	return Summ;
}


double Geometric::get_first() {
	return (this->first);
}

double Geometric::get_step() {
	return (this->step);
}

int Geometric::get_type() {
	return 2;
}