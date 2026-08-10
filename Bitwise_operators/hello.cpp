#include<iostream>
using namespace std;

int main() {
    
    for(int i=0;i<=3;i++){
	    cin>>i;
	}
	
	int a=20,b=30,c=41;
	
	if(c>b && b>a){
	    cout<<"Increasing";
	}if(a>b && b>c){
	    cout<<"Decreasing";
	} else{
	    cout<<"Neither";
	}
    return 0;
}