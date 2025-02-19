#include <iostream>
using namespace std;

class PizzaFrame{

    private:
    int radius;

    public:
    PizzaFrame(int r);
    ~PizzaFrame();
    double getsize(); //호출된 함수 
};

double PizzaFrame::getsize()
{
    return radius*radius*3.14;
}

PizzaFrame::PizzaFrame(int r) //객체가 생성될때 호출되고 radius
                                //변수를 초기화 함
{
    radius=r;
    cout<<"constructor size is "<<radius<<endl;
}

PizzaFrame::~PizzaFrame()
{
    cout<<"distructor size is "<<radius<<endl;
}

int main()
{
    PizzaFrame pizza(5);
    double size = pizza.getsize();
    cout<<"pizza size is "<<size<<endl;
}