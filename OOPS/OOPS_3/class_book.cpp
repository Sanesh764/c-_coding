#include<iostream>
using namespace std;
int main(){
    class book{
        public:
        char name;
        int price;
        int noOfpage;
        
        int countbooks(int p){
            if(price<p) return 1;
            else return 0;
        }
        bool isbookpresent(char book){
            if(name==book) return true;
            else return false;
        }
    };
    book harrypotter;
    harrypotter.name='H';
    harrypotter.price=1000;
    harrypotter.noOfpage=500;
    cout<<harrypotter.countbooks(300)<<endl;
    cout<<harrypotter.isbookpresent('H')<<endl;

    
    return 0;
}