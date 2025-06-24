// #include<iostream>
// using namespace std;
// //this code give me output 10,10,10,10
// //bez b har bar new ban raha hai jaise hi function
// //khatm ho raha hai b ka value jo 11 ho raha hai oo bhi khatam ho ja raha hai
// //and new value b ban raha hai jiska value 10 hai
// // void print(){
// //     int b=10;
// //     cout<<b<<endl;
// //     b++;
// // }

// void print(){
//     static int b=10;
//     cout<<b<<endl;
//     b++;
// }

// int main() {
//     print();
//     print();
//     print();
//     print();
//     return 0;
// }


//scope resolution operator ::

// #include<iostream>
// using namespace std;
// int b=10;
// int main() {
//     int b=17;
//     cout<<b<<endl;//output 17
//     cout<<::b<<endl;//output 10
//     return 0;
// }

#include<iostream>
using namespace std;
class Bike{
public:
    static int noOfBikes;//this belongs to the class.
    int tyresize;
    int enginesize;

    Bike(int tyresize,int enginesize){
        this->tyresize=tyresize;
        this->enginesize=enginesize;
    }
    static void increasenoOFBike(){
        noOfBikes++;
    }
};
int Bike::noOfBikes=10;
int main() {
    Bike tvs(12,100);
    Bike royalEnfield(20,200);

    royalEnfield.increasenoOFBike();
    cout<<royalEnfield.noOfBikes<<endl;
    cout<<tvs.noOfBikes<<endl;

    tvs.increasenoOFBike();
    cout<<royalEnfield.noOfBikes<<endl;
    cout<<tvs.noOfBikes<<endl;

    Bike::increasenoOFBike();
    cout<<royalEnfield.noOfBikes<<endl;
    cout<<tvs.noOfBikes<<endl;

    // cout<<tvs.tyresize<<" "<<tvs.enginesize<<endl;
    // cout<<royalEnfield.tyresize<<" "<<royalEnfield.enginesize<<endl;
    
    return 0;
}
/*
static memory-> same for all objects
it doesn,t belong to object ,it belong to class
isko class name say bhi direct call kar sakte hai
by using--->>  (::)  scope resolation operator
*/