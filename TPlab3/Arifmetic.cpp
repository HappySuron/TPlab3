#include "Arifmetic.h"


Arifmetic::Arifmetic() {
	this->first = 1;
	this->step = 3;
}


Arifmetic::Arifmetic(double first, double step) {
	this->first = first;
	this->step = step;
}

Arifmetic::~Arifmetic() {
	delete this;
}

double Arifmetic::find_summ(int n) {
	double Summ = 0;

	Summ = ((2 * (this->first) + ((this->step) * (n - 1))) / 2) * n;
	return Summ;
}

double Arifmetic::get_first() {
	return (this->first);
}

double Arifmetic::get_step() {
	return (this->step);
}

int Arifmetic::get_type() {
	return 1;
}