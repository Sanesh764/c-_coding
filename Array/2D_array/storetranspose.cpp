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
   cout<<endl;


   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
    cout<<endl;
    //store the transpose
    int tras[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            tras[i][j]=arr[j][i];
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<tras[i][j]<<" ";
        }
        cout<<endl;
    }
}