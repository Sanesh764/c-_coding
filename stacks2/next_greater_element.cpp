#include<iostream>
#include<stack>
using namespace std;

int main() {
    int arr[]={3,1,2,5,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int nge[n];//next greater element
    //brout force method TC=O(N^2) ,SC=O(1)
    // for(int i=0;i<n;i++){
    //     nge[i]=-1;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]>arr[i]){
    //             nge[i]=arr[j];
    //             break;
    //         }
    //     }
    // }
    //using stack :pop,ans,push
    //sc=O(n),TC=(n+n)=O(2n)=O(n)
    stack<int>st;
    nge[n-1]=-1;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        //pop all the element smaller then arr[i]
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        //marks the ans in nge array
        if(st.size()==0) nge[i]=-1;
        else nge[i]=st.top();
        //push the element of arr[i]
        st.push(arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    return 0;
}