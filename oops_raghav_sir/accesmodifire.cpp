#include<iostream>
using namespace std;
class Students{
public:
    int rno;
    string name;
    Students(){//default constructor
    }
    Students(int r,string n,float c){//paramterised constructor
        rno=r;
        name=n;
        cgp=c;//use private member
    }
    float getcgp(){//gettter
        return cgp;
    }
    void setcgp(float c){//setter
        cgp=c;
    }
private:
    float cgp;//private member
};
int main (){
    // Students s1(75,"sanesh",8.5);
    // cout<<s1.getcgp()<<endl;
    // s1.setcgp(8.9);
    Students s1(75, "sanesh", 8.5);

    // Print initial CGP
    cout << "Initial CGP: " << s1.getcgp() << endl;

    // Update CGP
    s1.setcgp(8.9);

    // Print updated CGP
    cout << "Updated CGP: " << s1.getcgp() << endl;

}
