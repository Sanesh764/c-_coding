#include<iostream>
using namespace std;
class Complexnumber{
public:
    int imaginary;
    int real;

//method 1
    // Complexnumber add(Complexnumber &c1){
    //     Complexnumber c3;
    //     c3.real=c1.real+this->real;
    //     c3.imaginary=c1.imaginary+this->imaginary;
    //     return c3;
    // }

    //method 2
    Complexnumber operator +(Complexnumber &c1){
        Complexnumber c3;
        c3.real=c1.real+this->real;
        c3.imaginary=c1.imaginary+this->imaginary;
        return c3;
    } 

    Complexnumber operator -(Complexnumber &c1){
        Complexnumber c3;
        c3.real=c1.real-this->real;
        c3.imaginary=c1.imaginary-this->imaginary;
        return c3;
    } 
};
int main() {
    Complexnumber a1,a2;
    a1.imaginary=10;
    a1.real=5;

    a2.imaginary=2;
    a2.real=3;

    Complexnumber a3;
    // a3.real=a1.real+a2.real;
    // a3.imaginary=a1.imaginary+a2.imaginary;
    //a3=a1.add(a2);//method 1

    a3=a1+a2;//method 2

    Complexnumber a4;
    a4=a1-a2;
    cout<<"real "<<a3.real<<" "<<"imaginary "<<a3.imaginary<<endl;
    cout<<"real "<<a4.real<<" "<<"imaginary "<<a4.imaginary<<endl;
    return 0;
}