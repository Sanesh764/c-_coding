#include<iostream>
#include<math.h>
using namespace std;

int pow(int x,int y){
    if(y==0){
        return 1;
    }
    int ans=pow(x,y/2);
    if(y%2==0){
    return ans*ans;
    }
    else{
        return x*ans*ans;
    }
    
}
int main(){
    int a;
    cout<<"enter positive number :";
    cin>>a;
    int b;
    cout<<"enter positive number :";
    cin>>b;

    pow(a,b);
    // if(a==pow(a,2)){
    //     cout<<"true"<<endl;
    // }
    // else {
    //     cout<<"false"<<endl;
    // }

}