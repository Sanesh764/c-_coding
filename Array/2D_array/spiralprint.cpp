#include<iostream>
using namespace std;

int main(){
    int m, n;
    cout<<"enter rows: ";
    cin>>m;
    cout<<"enter columns: ";
    cin>>n;

    int arr[m][n];

    cout<<"enter elements:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"\nSpiral Order: ";

    int minr = 0, minc = 0;
    int maxr = m-1, maxc = n-1;

    while(minr <= maxr && minc <= maxc){

        // 1. left → right
        for(int j = minc; j <= maxc; j++){
            cout << arr[minr][j] << " ";
        }
        minr++;

        // 2. top → bottom
        for(int i = minr; i <= maxr; i++){
            cout << arr[i][maxc] << " ";
        }
        maxc--;

        // 3. right → left
        if(minr <= maxr){
            for(int j = maxc; j >= minc; j--){
                cout << arr[maxr][j] << " ";
            }
            maxr--;
        }

        // 4. bottom → top
        if(minc <= maxc){
            for(int i = maxr; i >= minr; i--){
                cout << arr[i][minc] << " ";
            }
            minc++;
        }
    }

    return 0;
}

/*
3
3

1 2 3
4 5 6
7 8 9 

output :1 2 3 6 9 8 7 4 5

→ → →
      ↓
← ← ←
↑

*/