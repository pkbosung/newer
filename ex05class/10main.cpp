 #include <iostream>
using namespace std;

#include "PizzaFrame.h"

int add(int a, int b)
{
    return a+b;
}

namespace myspace{
    int add(int a, int b){
        return a+b+b;
    }
}
int main(){
    cout<<add(1,2)<<endl;
    cout<<myspace::add(1,2)<<endl;

    return 0;
}