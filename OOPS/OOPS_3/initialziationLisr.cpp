#include<iostream>
using namespace std;
class Bike{
public:
    int tyresize;
    int enginesize;

    Bike(int tS,int eS):tyresize(tS),enginesize(eS){

    }
};
int main() {
    Bike tvs(12,100);
    Bike royalEnfield(20,200);

    cout<<tvs.tyresize<<" "<<tvs.enginesize<<endl;
    cout<<royalEnfield.tyresize<<" "<<royalEnfield.enginesize<<endl;
    
    return 0;
}