#include <iostream>
using namespace std;

#include "PizzaFrame.h"

int main(){

    PizzaFrame smallPizza;
    PizzaFrame bigPizza(10);

    PizzaFrame *p;
    p=&smallPizza;
    cout<<"The size of small pizza is "<<p->getsize()<<endl;

    p=&bigPizza;
    cout<<"The size of big pizza is "<<p->getsize()<<endl;

    return 0;
}