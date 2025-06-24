#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    float avg;

    Cricketer(string name,int runs,float avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    }
};
void change(Cricketer *c){
    
    c->avg=68.9;// (*c).avg=89.4;//both are same
}

int main(){
    //Cricketer c1("virat kohli",25000,52.7);
    Cricketer c2("Rohit sharma",18000,47.8);
    change(&c2);
    cout<<c2.avg<<endl;

    Cricketer* p1= &c2;
    cout<<p1->runs<<endl;
    cout<<c2.avg<<endl;
    p1->avg=76.9;
    cout<<c2.avg<<endl;




}