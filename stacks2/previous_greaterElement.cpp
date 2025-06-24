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
    int pge[n];//previous greater element
    //using stack :pop,ans,push
    //sc=O(n),TC=(n+n)=O(2n)=O(n)
    stack<int>st;
    pge[0]=-1;
    st.push(arr[0]);
    for(int i=1;i<=n-1;i++){
        //pop all the element smaller then arr[i]
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        //marks the ans in nge array
        if(st.size()==0) pge[i]=-1;
        else pge[i]=st.top();
        //push the element of arr[i]
        st.push(arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<pge[i]<<" ";
    }
    return 0;
}