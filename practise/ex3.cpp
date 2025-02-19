#include <iostream>
using namespace std;

class PizzaFrame
{
    private:
        int radius;
    public:
        PizzaFrame();
        PizzaFrame(int r);
        ~PizzaFrame();
        double getSize();
        void setRadius(int r);
}; //선언

PizzaFrame::PizzaFrame(){
    radius=1;
    cout<<"1st constructor, radius is "<<radius<<endl;
} //정의

PizzaFrame::PizzaFrame(int r){
    radius=r;
    cout<<"2st constructor, radius is "<<radius<<endl;
}
double PizzaFrame::getSize(){
    return radius*radius*3.14;
}
PizzaFrame::~PizzaFrame()
{
    cout<<"deconstructor, radius is "<<radius<<endl;
}
void PizzaFrame::setRadius(int r){
    radius =r;
}
int add(int a,int b){
        return a+b;
    }
    namespace myspace{
        int add(int a,int b){
            return a+a+b;
        }
    }
int main(){
    PizzaFrame *smallPizza = new PizzaFrame;
    PizzaFrame *bigPizza = new PizzaFrame(10);

    cout<<"small Pizza is "<<smallPizza->getSize()<<endl;
    cout<<"big Pizza is "<<bigPizza->getSize()<<endl;

    PizzaFrame *dynamic = new PizzaFrame[3];
    dynamic->setRadius(10);
    (dynamic+1)->setRadius(20);
    (dynamic+2)->setRadius(30);
    for(int i=0; i<3; i++){
        cout<<"size"<<i<<"is"<<(dynamic+i)->getSize()<<endl;
    }

    
    cout<<myspace::add(1,2)<<endl;


    delete smallPizza;
    delete bigPizza;

}