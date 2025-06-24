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
        cout<<"constructor call hua\n";
    }
};
int main() {
    Bike tvs(12,100);//object call
    Bike honda(16,150);
    Bike royalEnfield(20,200);

    cout<<tvs.tyresize<<" "<<tvs.enginesize<<endl;
    cout<<honda.tyresize<<" "<<honda.enginesize<<endl;
    cout<<royalEnfield.tyresize<<" "<<royalEnfield.enginesize<<endl;
    
    return 0;
}