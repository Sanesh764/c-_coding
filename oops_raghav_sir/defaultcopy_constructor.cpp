#include<iostream>
using namespace std;
class Example{
public:
    int value;
    Example(int v){
        //parametrized constructor
        value=v;
    }
};
int main() {
    Example obj1(10);//parametrized constructor are called
    Example obj2=obj1;// default parametrized constructor are called
    cout<<"obj1 value :"<<obj1.value<<endl;
    cout<<"obj2 value :"<<obj2.value<<endl;


    return 0;
}