#include<iostream>
#include<climits>
using namespace std;
int main(){
   int m;
   cout<<"the number of rows :";
   cin>>m;
   int n;
   cout<<"the numbe rof coloums :";
   cin>>n;
   int arr[m][n];
   int sum=0;
   
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
   }
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        sum += arr[i][j];
    }
   }
   cout<<sum;
}