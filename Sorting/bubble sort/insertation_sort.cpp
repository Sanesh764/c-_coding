#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[5]={5,44,13,-2,11};
    int n=5;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    //insertation sort
    for(int i=1;i<=n-1;i++){
        /*i start from 2nd element of the array.
        and comapre if arr[j]>=arr[j-1] then you break the while loop
        other wise you swap(arr[j],arr[j-1]);
        after swapping we decrease j--;
        and again compare 
        */
        int j=i;
        while(j>=1){
            if(arr[j]>=arr[j-1]) break;
            else  swap(arr[j],arr[j-1]);
            j--;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
/*Best Case: O(n)
Worst Case: O(n^2) */