#include <iostream>
using namespace std;

class PizzaFrame
{
    private:
        int radius;
    public:
        PizzaFrame(); //생성자
        PizzaFrame(int r); //생성자
        double getsize();
};

PizzaFrame::PizzaFrame(){
    radius=1;
    cout<<"1st constructor, radius is "<<radius<<endl;
}
PizzaFrame::PizzaFrame(int r){
    radius=r;
    cout<<"2st constructor, radius is "<<radius<<endl;
}
double PizzaFrame::getsize() //14 . 18줄에 radius 멤버변수 초기화된것을 사용
{
    return radius*radius*3.14;
}
int main()
{
    PizzaFrame smallpizza;
    double size = smallpizza.getsize();
    cout<<"the size of small pizza is "<<size<<endl;

    PizzaFrame bigpizza(10);
    size=bigpizza.getsize();
    cout<<"the size of big pizza is "<<size<<endl;
}

