#include<iostream>
using namespace std;
class Cricketer{
    public:
    char name;
    int age;
    int noOfTestMatches;
    int averageScore;
};

int main(){
    Cricketer Rohit;
    Rohit.name='R';
    Rohit.age=34;
    Rohit.noOfTestMatches=100;
    Rohit.averageScore=45;

    Cricketer virat;
    virat.name='V';
    virat.age=36;
    virat.noOfTestMatches=134;
    virat.averageScore=55;

    Cricketer cricketers[2]={Rohit,virat};
    for(int i=0;i<2;i++){
        cout<<cricketers[i].name<<endl;
        cout<<cricketers[i].age<<endl;
        cout<<cricketers[i].noOfTestMatches<<endl;
        cout<<cricketers[i].averageScore<<endl;
    }
    
}