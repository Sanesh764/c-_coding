#include<iostream>
using namespace std;
class Scooty{//parent class
public:
    int topspeed;
    float mileage;
private: bootspace;
};
class Bike: public Scooty{//child class /derived class
public:
    int gears;
};
int main(){
    Bike b1;
    b1.topspeed=190;
    b1.mileage=12.5;
    b1.gears=6;
    //b1.bootspace=12;//error found

}