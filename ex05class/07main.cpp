#include <iostream>
using namespace std;

#include "PizzaFrame.h"

int main(){
    PizzaFrame *smallPizza = new PizzaFrame;
    PizzaFrame *bigPizza = new PizzaFrame(10);
    cout<<"the size of small pizza is "<<smallPizza->getsize()<<endl;
    cout<<"the size of big pizza is "<<bigPizza->getsize()<<endl;

    delete smallPizza; //클래스에 소멸자 없어도 기본소멸자 호출
    delete bigPizza; //객체 반환및 소멸자 실행

    return 0;
}