#include<iostream>
using namespace std;
int main(){
    class Players{
        public:
        int score;//data member
        int health;
        void showhealth(){//member function
            cout<<"health is :"<<health;
        }
        void showscore(){
            cout<<"score is :"<<score;
        }
    };
    Players player[10];
    Players sanesh;
    sanesh.score=79;
    sanesh.health=99;
    cout<<sanesh.health<<endl;
    cout<<sanesh.score<<endl;
    sanesh.showhealth();
    cout<<endl;
    sanesh.showscore();
    return 0;
}