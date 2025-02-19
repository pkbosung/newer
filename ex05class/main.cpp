#include <iostream>
using namespace std;
#include "PizzaFrame.h"

int main()
{
    PizzaFrame smallpizza;
    double size = smallpizza.getsize();
    cout<<"the size of small pizza is "<<size<<endl;

    PizzaFrame bigpizza(10);
    size=bigpizza.getsize();
    cout<<"the size of big pizza is "<<size<<endl;
}
