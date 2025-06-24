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
void quicksort(int arr[],int startingidx,int endidx){
    if(startingidx>=endidx) return;
    int pivotidx=partition(arr,startingidx,endidx);
    quicksort(arr,startingidx,pivotidx-1);
    quicksort(arr,pivotidx+1,endidx);
}
int main(){
    int arr[]={5,1,-19,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}