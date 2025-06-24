#include<iostream>
using namespace std;
class A{
private:
    int a_ka_private;
public:
    int a_ka_public;
    A(){
        cout<<"A ka constructor call hua\n";
    }
};
class B :virtual public A{
public:
    int b_ka_public;
};
class C :virtual public A{
public:
    int c_ka_public;
    C(){
        cout<<"c ka constuctor call hua\n";
    }
};
class D:public B,public C{
public:
    int d_ka_public;

    void show(){
        cout<<a_ka_public<<endl;
    }
};
int main() {
    D d;
    d.a_ka_public=10;
    d.show();
    return 0;
}