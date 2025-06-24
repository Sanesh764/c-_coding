#include<iostream>
using namespace std;
class vehicle{
public:
    int tyresize;
    int enginesize;

    virtual void calculatemileage()=0;
    virtual void refuel()=0;
};
class Bike :public vehicle{
public:
    int handlesize;
    void calculatemileage(){
        cout<<"Bike la show\n"<<endl;
    }
    void refuel(){
        cout<<"refuel"<<endl;
    }
};
int main() {
    Bike b;
    b.calculatemileage();
    return 0;
}