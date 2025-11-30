#include<iostream>
using namespace std;
int main(){
    class players{
    private:
        int score=80;
        int health=900;

    public:
        //setter
        void setscore(int s){
            score=s;
        }
        void sethealth(int h){
            health=h;
        }
        //getter
        int getscore(){
            return score;
        }
        int gethealth(){
            return health;
        }

    };
    players sanesh;
    sanesh.setscore(10);
    sanesh.sethealth(50);
    cout<<sanesh.getscore()<<endl;
    cout<<sanesh.gethealth()<<endl;;
    
    return 0;
}