#include<iostream>
using namespace std;
int mazepath(int sr,int sc,int er,int ec){
    //sr=staring rows
    //sc =starting coloum
    //er =ending rows
    //ec=ending coloum
    if(sc>er || sc>ec) return 0;
    if(sr==er ||sc==ec) return 1;
    int rightways=mazepath(sr,sc+1,er,ec);
    int downways=mazepath(sr+1,sc,er,ec);
    int totalways=rightways+downways;
    return totalways;
}
int maze2(int row,int col){
    if(row<1 &&col<1) return 0;
    if(row==1 && col==1) return 1;
    int rightways=maze2(row,col-1);//right
    int downways=maze2(row-1,col);//down
    int totalways=rightways+downways;
    return totalways;
}
void printpath(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){//destination reached 
        cout<<s<<endl;
        return;
    }
    printpath(sr,sc+1,er,ec,s+'R');//right
    printpath(sr+1,sc,er,ec,s+'D');//down

}
int main(){
  // printpath(1,1,3,3,"");
  cout<<maze2(3,3);
}