#include<iostream>
using namespace std;

class  Vehicle{
public:
    int tyresize;
    int enginesize;
    int light;
    string companyname;

   virtual void show(){
        cout<<"vehicle ka show\n"<<endl;
    }
};
class Bike :public Vehicle{
public:
    int handlesize;

    void show() override{
        cout<<"Bike ka show\n"<<endl;
    }
};
class C: public Bike{
public:
    void show(){
        // Vehicle::show();
        // Bike::show();
        cout<<"Bike ka show\n"<<endl;
    }
};

int main() {
    //compiler pov- vehicle type ka hai
    //runtime pov-Bike ka address hai
    Bike b;
    Vehicle *a;
    a=new Bike;
    a->show();
    a=new Vehicle;
    a->show();
    return 0;
}