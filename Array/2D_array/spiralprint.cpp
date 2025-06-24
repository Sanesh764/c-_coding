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
    cout<<endl;
    //spiral
    int minr=0,minc=0;//minr=minumum row and minc=minimum coloums
    int maxr=m-1,maxc=n-1;//maxr=max row and maxc=max coloum
    while(minr<=maxr && minc<=maxc){
        //right
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;
    }
    //down
    for(int i=minr;i<=maxr;i++){
        cout<<arr[i][maxc]<<" ";
    }
    maxc--;
    //left
    for(int j=maxc;j>=minc;j--){
        cout<<arr[maxr][j]<<" ";
    }
    maxr--;
    //up
    for(int i=maxr;i>=minr;i--){
        cout<<arr[i][minc]<<" ";
    }
    minc++;
    //1 2 3 6 9 8 7 4 5
}