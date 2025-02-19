#include <iostream>
using namespace std;

#include "PizzaFrame.h"

int main(){
    MyPizzaFrame myPizza;
    myPizza.setTopping("Potato");
    myPizza.showTopping();

    return 0;
}