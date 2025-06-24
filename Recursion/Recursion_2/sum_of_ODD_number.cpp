//sum of odd number between a and b
#include<iostream>
using namespace std;
// void sumofoddnumber(int x,int y){
//     int sum=0;
//     for(int i=x;i<=y;i++){
//         if(i%2!=0){
//             sum += i;
//         }
//     }
//     cout<<"sum of odd number between "<<x <<" and "<<y<<" is :"<<sum;
// }

int sumofoddnumber(int x,int y){
    //base case
    if(x>y){
        return 0;
    }
    //if a is oddd number ,then add it to the sum
    //and recurse for the next number
    if(x%2!=0)  return x+sumofoddnumber(x+1,y);
    //if x is even number then skip to the next number
    return sumofoddnumber(x+1,y);
}


int main(){
    int a;
    cout<<"enter your first number a:"; 
    cin>>a;

    int b;
    cout<<"enter your second number b:";
    cin>>b;

    int result = sumofoddnumber(a,b);

    cout<<"sum of odd number between "<<a <<" and "<<b<<" is :"<<result;
}