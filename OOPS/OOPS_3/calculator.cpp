#include<iostream>
using namespace std;
int main(){
    
    class calculator{
        public:
        int a;
        int b;
        void add(){//member function
            cout<<a+b;
        }
        void sub(){
            cout<<a-b;
        }
        void mul(){
            cout<<a*b;
        }
        void div(){
            cout<<a/b;
        }
        void modulo(){
            cout<<a%b;
        }
        void square(){
            cout<<a*b;

        }
    };
    calculator calci;
    calci.a=40;
    calci.b=20;
    calci.add();
    cout<<endl;

    calci.sub();
    cout<<endl;

    calci.mul();
    cout<<endl;

    calci.div();
    cout<<endl;
    
    calci.modulo();
    cout<<endl; 

    calci.square();
    cout<<endl;
    
    return 0;
}