#include<iostream>
using namespace std;
class Bike{
public:
    int tyresize;
    int enginesize;
//constructor overloading
    Bike(int tS,int eS):tyresize(tS),enginesize(eS){}
    Bike(int tS) : tyresize(tS),enginesize(100){}
    Bike() : tyresize(12),enginesize(100) {}

    //example of constructor overloading
    // void calculateArea(int l,int b){
    //     cout<<l*b<<endl;
    // }

    // void calculateArea(int s){
    //     cout<<s*s<<endl;
    // }

    // void calculateArea(float s){
    //     cout<<3.14*s*s<<endl;
    // }
};
int main() {
    Bike tvs(12,100);
    Bike royalEnfield(20,200);

    cout<<tvs.tyresize<<" "<<tvs.enginesize<<endl;
    cout<<royalEnfield.tyresize<<" "<<royalEnfield.enginesize<<endl;
    
    return 0;
}