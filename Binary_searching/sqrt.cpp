#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,21,24};
    int n=sizeof arr/sizeof arr[0];
    int lo=0;
    int hi=36;
    int x=36;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(mid*mid==x) return mid;

        if(mid*mid>x) hi=mid-1;

        if(mid*mid<x) lo=mid+1;
    }
}