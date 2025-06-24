#include<iostream>
using namespace std;
class Complexnumber{
private:
    int privt;
public:
    int imaginary;
    int real;
    friend Complexnumber operator +(Complexnumber &c1,Complexnumber &c2);
    friend class primenumber;
    
};
class primenumber{
    void show(Complexnumber &c){
        c.privt=10;
    }
};
Complexnumber operator +(Complexnumber &c1,Complexnumber &c2){
    Complexnumber c3;
    c3.real=c1.real+c2.real;
    c3.imaginary=c1.imaginary+c2.imaginary;
    return c3;
}


// class A{
//     int a_private=10;
// public:
//     friend void show(A &a);
// };
// void show(A &a){
//     cout<<a.a_private<<endl;
// }

int main() {
    // A a;
    // show(a);
    Complexnumber c1,c2;
    c1.real=10;
    c1.imaginary=5;
    c2.real=5;
    c2.imaginary=20;
    Complexnumber c3;
    c3=c1+c2;
    cout<<"real "<<c3.real<<" "<<"imaginary "<<c3.imaginary<<endl;

    return 0;
}