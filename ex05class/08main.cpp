#include <iostream>
using namespace std;
#include "PizzaFrame.h"

int main(){
    PizzaFrame staticPizza[3];
    staticPizza[0].setRadius(1);
    staticPizza[1].setRadius(2);
    staticPizza[2].setRadius(3);

    for(int i=0; i<3; i++){
        cout<<"pizza size is "<<(staticPizza[i].getsize())<<endl;
    }

    PizzaFrame *dypizza = new PizzaFrame;
    dypizza->setRadius(10);
    return 0;
    
}

