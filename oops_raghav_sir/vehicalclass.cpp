#include<iostream>
using namespace std;
class Behicle{//parent class
public:
    int topspeed;
    float mileage;
    string fuel;
};
class Car: public Vehicle{//child class /derived class
public:
};

class Bike: public Vehicle{//child class /derived class
public:
};

class Truck: public Vehicle{//child class /derived class
public:
};
int main(){
    Bike b1;
    b1.topspeed=190;
    b1.mileage=12.5;
    b1.gears=6;


}