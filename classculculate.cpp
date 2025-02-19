#include <iostream>
using namespace std;

class calculate{
    public:
        int x,y,sum;

        calculate(int i,int w){
            this->x=i;//int x=i;
            this->y=w;//int y=w;
            this->sum=this->x + this->y;//int sum=x+y;
        } //생성자에서 새로운 지역변수가 만들어져서
        //클래스 멤버변수랑 다른값이 되버림
};
int main()
{   
    int num1,num2;
    cout<<"Type the first number: ";
    cin>>num1;
    cout<<"Type the second number: ";
    cin>>num2;
    calculate cal(num1,num2);
    cout<<"Sum is = "<<cal.sum;
}