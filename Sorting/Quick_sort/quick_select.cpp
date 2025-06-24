//finding kth smallest elemnt in array by using quick sort
//in avg case time complicity is O(n)
//in worth case time complacity is O(n2)
#include<iostream>
using namespace std;
int partition(int arr[],int startingidx,int endidx){
    int pivotelement=arr[(startingidx+endidx)/2];
    int count=0;
    for(int i=startingidx;i<=endidx;i++){
        if(i==(startingidx+endidx)/2) continue;
        if(arr[i]<=pivotelement) count++;
    }
    int pivotIdx=count+startingidx;
    swap(arr[(startingidx+endidx)/2],arr[pivotIdx]);
    int i=startingidx;
    int j=endidx;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotelement) i++;
        if(arr[j]>pivotelement) j--;
        else if(arr[i]>pivotelement && arr[j]<=pivotelement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
int kthsmallest(int arr[],int startingidx,int endidx,int k){
    int pivotidx=partition(arr,startingidx,endidx);
    if(pivotidx+1==k) return arr[pivotidx];
    else if(pivotidx+1<k) return kthsmallest(arr,pivotidx+1,endidx,k);
    else return kthsmallest(arr,startingidx,pivotidx-1,k);
    
    
}
int main(){
    int arr[]={5,1,-19,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=4;
   cout<<kthsmallest(arr,0,n-1,k);
    
}