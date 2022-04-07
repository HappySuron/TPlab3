#pragma once
#include "Progr.h"
class Geometric :
    public Progr
{
private:
    double first;
    double step;
public:
    Geometric();
    Geometric(double first, double step);
    ~Geometric();
    double find_summ(int n) override;
    
    double get_first() override;
    double get_step() override;
    int get_type() override;
};

