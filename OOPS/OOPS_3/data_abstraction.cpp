#include<iostream>
using namespace std;
//class is a blue print
    /*
    private
    proceted
    public
    */
    class players{
    public:
        int score;//data member
        int health;
    };
int main(){
    
    players player[10];
    players sanesh;
    sanesh.score=79;
    sanesh.health=99;
    cout<<sanesh.health<<endl;
    cout<<sanesh.score<<endl;

    players rahul;
    rahul.score=190;
    rahul.health=56;
    cout<<rahul.health<<endl;
    cout<<rahul.score<<endl;

    players madhu;
    madhu.score=99;
    madhu.health=98;
    cout<<madhu.health<<endl;
    cout<<madhu.score<<endl;
    return 0;
}