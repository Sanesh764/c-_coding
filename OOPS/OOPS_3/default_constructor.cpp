#include<iostream>
using namespace std;
class Bike{
public:
    string name;

    //default constructor
    Bike(){
        cout<<"constructor call hua\n";
    }
};
int main() {
    Bike tvs;//object call
    Bike honda;
    Bike royalEnfield;
    
    return 0;
}