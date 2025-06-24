// #include<iostream>
// using namespace std;
// class Students{//Students is a new data type
// public:
//     string name;
//     int roll_number;
//     float gpa;
//     //name,roll_number,gpa all are attributes of the class
// };
// int main(){
//     Students x1;//x1 is a object and students is a class
//     x1.name="sanesh kumar";
//     x1.gpa=7.49;
//     x1.roll_number=20;


//     Students x2;//x2 is object
//     x2.name="suman kumar";
//     x2.gpa=7.89;
//     x2.roll_number=22;

//     cout<<x1.name<<endl;
//     cout<<x1.gpa<<endl;
//     cout<<x1.roll_number<<endl;
// }

/*
class is a blue  print
objects is a instance
*/
#include<iostream>
using namespace std;
class Students{
public:
    string name;
    int roll_number;
    float gpa;
    Students(string s,int r,float g){//constructor
        name=s;
        roll_number=r;
        gpa=g; 
    };
    void print(){
        cout<<name<<" "<<roll_number<<" "<<gpa<<endl;
    }
    void change(string s){
        name=s;
    } 
int main(){
    Students x1("saesh kumar",20,7.49);
    print();
}