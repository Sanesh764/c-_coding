#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        int value=i%2;//alternate 0 and 1
        for(int j=0;j<=i;j++){
            cout<<value<<" ";
            value =1-value;//toggle betwwn o and 1
        }
        cout<<endl;
    }
}