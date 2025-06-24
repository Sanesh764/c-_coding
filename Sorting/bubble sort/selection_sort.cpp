#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[6]={91,90,43,2,1,3};
    int n=6;
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    //selection sort
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int minidx=-1;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<min){
                min=arr[j];
                minidx=j;
            }
        }
        swap(arr[i],arr[minidx]);
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
}
/*time complicity
best and worth case:O(n^2)
space complicity: O(1)
*/