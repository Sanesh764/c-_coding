#include<iostream>
using namespace std;
class Students{
    public:
    string name;
    int roll_number;
    float gpa;
    Students(){//defoult constructor ye hota hai
    }
    Students(int r){//1 parameter
        roll_number=r;
    }
    Students(string s,int r){//this is called paramerised constructor
        name=s;//2 parameter
        roll_number=r;
    }
    Students(string s,int r,float g){//paramerised constructor
        name=s;//3 paramteter
        roll_number=r;
        gpa=g;
    }
    Students(int r,float g,string s){//paramerised constructor
        name=s;//3 paramteter
        roll_number=r;
        gpa=g;
    }
};
int main(){
    Students s1("sanesh kumar",30);
    s1.gpa=8.2;

    //Students s2("suman kumar",40,9.4);
    Students s2;
    s2.name="suman kumar";
    s2.roll_number=88;
    s2.gpa=9.7;

    Students s3("santosh",40,8.9);
    Students s4(69);
    Students s5(23,9.7,"madhu");
    Students s6=s2;
    s6.name="rahul kumar";//deep copy
    s6.gpa=1.2;
    s6.roll_number=1;
    //bez changes ho gaya suman say rahul

    Students s7(s1);//copy constructor-deep copy
    s7.name="aarti kumari";


    cout<<s1.name<<" "<<s1.roll_number<<" "<<s1.gpa<<" "<<endl;
    cout<<s2.name<<" "<<s2.roll_number<<" "<<s2.gpa<<" "<<endl;
    cout<<s3.name<<" "<<s3.roll_number<<" "<<s3.gpa<<" "<<endl;
    cout<<s4.roll_number<<endl;
    cout<<s5.name<<" "<<s5.roll_number<<" "<<s5.gpa<<" "<<endl;
    cout<<s6.name<<" "<<s6.roll_number<<" "<<s6.gpa<<" "<<endl;
    cout<<s7.name<<" "<<s7.roll_number<<" "<<s7.gpa<<" "<<endl;
}