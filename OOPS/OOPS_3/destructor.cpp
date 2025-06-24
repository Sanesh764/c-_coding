#include<iostream>
using namespace std;
class Bike{
public:
    int tyresize;
    int enginesize;

    //default constructor
    Bike(int tyresize,int enginesize){
        this->tyresize=tyresize;
        this->enginesize=enginesize;
    }
    //destructor
    ~Bike(){//tilda bolte hai isko --> ~
        cout<<"destructor call hua\n";
    }
};
int main() {
    Bike tvs(12,100);//object call
    Bike honda(16,150);
    Bike royalEnfield(20,200);
    bool flag=true;
    if(flag==true){
        Bike bmw(17,10000);
        cout<<bmw.tyresize<<" "<<bmw.enginesize<<endl;
    }

    cout<<tvs.tyresize<<" "<<tvs.enginesize<<endl;
    cout<<honda.tyresize<<" "<<honda.enginesize<<endl;
    cout<<royalEnfield.tyresize<<" "<<royalEnfield.enginesize<<endl;
    
    return 0;
}