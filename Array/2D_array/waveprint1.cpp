#include<iostream>
using namespace std;
int main(){
   int m;
   cout<<"enter rows of 1st matrix : ";
   cin>>m;
   int n;
   cout<<"enter coloums of 2st matrix :";
   cin>>n;
   int arr[m][n];
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
   }
   //wave
//    for(int i=0;i<m;i++){
//       if(i%2==0){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//       }
//       else {//1,3,5
//         for(int j=n-1;j>=0;j--){
//             cout<<arr[i][j]<<" ";
//         }
//       }
//    }

//coloumwisw
// printing'
for(int j=0;j<n;j++){
    for(int i=0;i<m;i++){
        cout<<arr[i][j]<<" ";
    }
}

}