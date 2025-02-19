#include <iostream>
using namespace std;

class PizzaFrame
{
public:   //default 는 private
    int radius;
    double getsize(){
        return radius*radius*3.14;
    }
};

int main(){
    PizzaFrame smallPizza;
    smallPizza.radius=1;
    double size = smallPizza.getsize();
    cout << "the size of small pizza is "<<size<<endl;

    PizzaFrame bigPizza;
    bigPizza.radius=10;
    size = bigPizza.getsize();
    cout << "the size of big pizza is "<<size<<endl;

}