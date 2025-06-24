// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int main(){
//     int n=5;
//     int arr[]={19,12,23,8,16};
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     vector<int>v(n,0);//0 means not visited
//     int x=0;
//     for(int i=0;i<n;i++){
//         int min=INT_MAX;
//         int mindx=-1;
//         for(int j=0;j<n;j++){
//             if(v[i]==1) continue;
//             else{
//                 if(min>arr[j]){
//                     min=arr[j];
//                     mindx=j;
//                 }
//             }
//         }
//         arr[mindx]=x;
//         v[mindx]=1;//visited
//         x++;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     //wrong hai.
// }
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int n = 5;
    int arr[] = {19, 12, 23, 8, 16};

    // Print the original array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> v(n, 0); // 0 means not visited
    int x = 0;

    // Selection sort logic
    for(int i = 0; i < n; i++){
        int min = INT_MAX;
        int mindx = -1;

        // Find the minimum element among the unvisited ones
        for(int j = 0; j < n; j++){
            if(v[j] == 1) continue; // Correct index check for visited array
            else{
                if(min > arr[j]){
                    min = arr[j];
                    mindx = j;
                }
            }
        }
        
        // Mark the minimum element as visited
        if(mindx != -1) {
            arr[mindx] = x; // Replace with x (incremental value)
            v[mindx] = 1;   // Mark as visited
            x++;            // Increment the counter
        }
    }

    // Print the modified array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
