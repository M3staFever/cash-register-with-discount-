#ifndef REGISTO_H
#define REGISTO_H
#include <iostream>
#include <string>
using namespace std;

class Registo
{
    public:
        Help();
        Calculum();
        Payment();



    protected:

    private:

        int n;
        float Val[10] = {0.30, 1.50, 3.50, 0.59, 1.49, 1.00, 0.99, 3.00, 45.99, 1.20};
        string Prod[10] = {"Water (1l)", "Coke (1l)", "Seitan (1kg)", "Soy Milk (1l)", "Noodles", "Spinach (1kg)", "Eggplant (1kg)", "Pizza", "faux leather jacket", "beer (1l)"};
        int loop;
        float sum;
        float amount;
        float paid;
        float discount;
        float totalDis;
        string Discanswer;
        string products;
        float change;
        int otherpriceid;
        float otherprice;

};

#endif // REGISTO_H
