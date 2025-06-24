#include<iostream>
using namespace std;
int main(){
   int m;
   cout<<"the number of rows :";
   cin>>m;
   int n;
   cout<<"the numbe rof coloums :";
   cin>>n;
   int arr[m][n];
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
   }
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
}
