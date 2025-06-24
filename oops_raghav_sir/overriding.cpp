#include<iostream>
#include<vector>
using namespace std;
class Scooty{
public:
    int topspeed;
    float mileage;
    virtual void sound(){
        cout<<"vroom vroom"<<endl;
    }
private:
    int bootspace;
};
class Bike : public Scooty{
public:
    int gears;
    void sound() override {
        cout<<"dhroom dhroom"<<endl;
    }

class SuperBike : public Scooty{
public:
    void sound() override {
        cout<<"zroom zroom"<<endl;
    }
};
int main(){
    Scooty* b=new Bike();//object pointer
    b->sound();
    Scooty* c= new SuperBike();
    c->sound;
    vector<scooty*>v;
}