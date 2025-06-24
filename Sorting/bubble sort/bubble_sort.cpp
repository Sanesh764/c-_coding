#include<iostream>
using namespace std;
int main(){
    int arr[6]={-1,111,43,2,1,0};
    int n=6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //bubble sort
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-1-i;j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }
//bubble sort optimised
 bool flag= false;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=true;
            }
        }
        if(flag==false){//swap didn,t happend
            break;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
/*time compicity
best case: O(n)
worst and average case:O(n^2)
*/