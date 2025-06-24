#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
       for(int i=0;i<3;i++){//i denotes row number
        for(int j=0;j<3;j++){//j denotes coloumn number
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
       }
}
