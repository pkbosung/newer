#include <iostream>
using namespace std;
#include "PizzaFrame.h"

PizzaFrame::PizzaFrame(){
    radius=1;
    cout<<"1st constructor, radius is "<<radius<<endl;
}
PizzaFrame::PizzaFrame(int radius){
    this-> radius = radius;
    cout<<"2st constructor, radius is "<<this->radius<<endl;
}
PizzaFrame::~PizzaFrame(){
    cout<<"destructor, radius is "<<radius<<endl;
}
double PizzaFrame::getsize() //14 . 18줄에 radius 멤버변수 초기화된것을 사용
{
    return radius*radius*3.14;
}
void PizzaFrame::setRadius(int r){
    radius = r;
}
// -----------------------------------------
MyPizzaFrame::MyPizzaFrame(){
    cout<<"MyPizzaFrame constructor"<<endl;
}
MyPizzaFrame::~MyPizzaFrame(){
    cout<<"MyPizzaFrame destructor"<<endl;
}
void MyPizzaFrame::setTopping(string topping){
    this->topping=topping;
}
void MyPizzaFrame::showTopping(){
    cout<<"My topping is "<<this->topping<<endl;
}
