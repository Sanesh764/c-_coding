#include<iostream>
using namespace std;
class player{
private:
        int health;
        int age;
        int score;
        int alive;
    public:
    //getter
    int gethealth(){
        return health;
    }
    int getage(){
        return age;
    }
    int getscore(){
        return score;
    }
    int isalive(){
        return alive;
    }
//settter
    void sethealth(int health){
        this->health=health;
    }
    void setage(int age){
         this->age=age;
    }
    void setscore(int score){
        this->score= score;
    }
    void setisalive(bool isalive){
        this->alive= alive;
    }

    };
    int addscore(player a,player b){
        return( a.getscore() + b.getscore());
    }
    player getmaxscoreplayer(player a,player b){
        if(a.getscore()>b.getscore()) 
            return a;
        else 
            return b;
    }
int main(){
    player sanesh;//object creation ,statically
    player santosh;//compite time ,static allocation

    player *shivansh=new player;//run time ,dynamic allocation
    
    sanesh.setage(21);
    sanesh.setscore(100);
    sanesh.setisalive(true);
    sanesh.sethealth(70);

    santosh.setage(22);
    santosh.setscore(20);
    santosh.setisalive(true);
    santosh.sethealth(100);

    shivansh->setscore(40);
    shivansh->setage(30);
    cout<<shivansh->getscore()<<endl;
    
}