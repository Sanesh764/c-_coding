#include<iostream>
#include<vector>
using namespace std;

int main() {
    //int arr[]={73,74,75,71,69,72,76,73};
    int arr[]={30,60,90};
    int n=sizeof(arr)/sizeof(arr[0]);

    vector<int>result(n,0);

    for(int i=0;i<n;i++){
        int counter=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                counter++;
                result[i]=counter;
                break;
            }
            counter++;
        }
    }

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}