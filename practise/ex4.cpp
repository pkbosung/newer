#include <iostream>
using namespace std;

class PizzaFrame{
    private:
        int radius;
    public:
        PizzaFrame();
        ~PizzaFrame();
        double getradius();
};
PizzaFrame::PizzaFrame(){
    radius=1;
    cout<<"radius size is "<<radius<<endl;
}
PizzaFrame::~PizzaFrame(){
    cout<<"diconstructor size is "<<radius<<endl;
}
double PizzaFrame::getradius(){
    return radius*radius*3.14;
}
int main()
{
    PizzaFrame *smallPizza=new PizzaFrame;
    cout<<"small pizza size is "<<smallPizza->getradius()<<endl;

    delete smallPizza;
}