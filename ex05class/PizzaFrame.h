class PizzaFrame
{
    private:
        int radius;
    public:
        PizzaFrame(); //생성자
        PizzaFrame(int r); //생성자
        ~PizzaFrame(); //소멸자
        double getsize();
        void setRadius(int r);
};

class MyPizzaFrame:public PizzaFrame{
    string topping;
public:
    MyPizzaFrame();
    ~MyPizzaFrame();
    void setTopping(string topping);
    void showTopping();
};
