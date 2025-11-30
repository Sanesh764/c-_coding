#include<iostream>
using namespace std;
class Bike{
    int typresize;
    int EngineCapacity;
public:
    Bike(int typresize,int EngineCapacity){
        this->typresize=typresize;
        this->EngineCapacity=EngineCapacity;
        cout<<"contuctor call hua";
    }
    ~Bike(){
        cout<<"distructor call hua";
    }
};
int main(){
    Bike Bi(10,20);
}