#include<iostream>
using namespace std;
class Vehicle{//base class,parent class
public:
    int tyresize;
    int enginesize;
    int lights=9;
    string companyName;
};
class Car : public Vehicle{//car inherits vehicle or car is a child of vehicle
public:
    int steeringsize;
};
class Bike : public Vehicle{//derived class,child class
public:
    int handlesize;
};
class A{
private://can not be excess.can not be inheritance
    int a_ka_private;
protected://can not be excess but can be inheritance
    int a_ka_protected;
public://can be excess and can be inheritance
    int a_ka_public;
};
class B :public A{

};
int main() {
   //Bike honda;
    // honda.companyName="honda";
    // honda.enginesize=500;
    // honda.handlesize=5;
    // honda.lights=10;
    // honda.tyresize=8;

    // cout<<honda.companyName<<endl;
    Car b1;
    cout<<b1.lights<<endl;
    b1.lights=90;
    cout<<b1.lights<<endl;




    return 0;
}