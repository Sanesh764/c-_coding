#include<iostream>
using namespace std;
class Car{//Car is a new data type
    public:
        string name;
        int price;
        int seats;//all are attributes
        string type;

        Car(string s,int p,int num_seats,string t){//constructor
            name=s;
            price=p;
            seats=num_seats;
            type=t;
        }
};
void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<" "<<endl;
}
void change(Car &c){
   c.name="audi A8";
   c.price=400000;
   c.seats=19;
   c.type="forturner";
}
int main(){
    Car c1("hunda city",150000,5,"sedan");
    // c1.name="hunda city";
    // c1.price=1500000;
    // c1.seats=5;
    // c1.type="sedan";
    print(c1);
    change(c1); 
    print(c1);

    // Car c2;
    // c2.name="maruti swift";
    // c2.price=700000;
    // c2.seats=5;
    // c2.type="hatchback";

    // Car c3;
    // c3.name="Totoya forturner";
    // c3.price=3600000;
    // c3.seats=8;
    // c3.type="SUV";

    // print(c1);
    // print(c2);
    // print(c3);
    
}
