#pragma once
#include "Progr.h"
class Arifmetic :
    public Progr
{
private:
    double first;
    double step;
public:
    Arifmetic();
    Arifmetic(double first, double step);
    ~Arifmetic();
    double find_summ(int n) override;
    
    double get_first() override;
    double get_step() override;
    int get_type() override;
};

