// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[]={2,-3,4,4,-7,-1,4,-2,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int k=5;
//     int p=-1;
//     int ans[n-k+1];
//     for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//         }
//     for(int i=0;i<k;i++){//tno =k
//         if(arr[i]<0){
//             p=i;
//             break;
//         }
//     }
    // if(p==-1) ans[0]=1;
    // else ans[0]=arr[p];
//     //sliding window
//     int i=1;
//     int j=k;
//     while(j<n){
//         if(p>=i) ans[i]=arr[p];
//         else{
//             p=-1;
//             for(int x=i;x<=j;x++){
//                 if(arr[x]<0){
//                     p=x;
//                     break;
//                 }
//             }
//             if(p!=-1) ans[i]=arr[p];
//             else ans[i]=1;
//         }
//         i++;
//         j++;
//     }
//     cout<<endl;
//     for(int i=0;i<n-k+1;i++){
//         cout<<ans[i]<<" ";
//     } 
// }


#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {2, -3, 4, 4, -7, -1, 4, -2, 6}; // Input array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate size of array
    int k = 3; // Window size

    int p = -1; // Stores the index of the first negative number in the current window
    int ans[n - k + 1]; // Stores the first negative number in each window

    // Step 1: Find the first negative number in the first window
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            p = i;
            break; // Stop as soon as we find the first negative number
        }
    }

    // Store the result for the first window
    if(p==-1) ans[0]=0;// If no negative found, store 0
    else ans[0]=arr[p];

    // Step 2: Sliding window approach
    //i=1 yaha isliye start kar rahe hai bez i=0 wala case uper pahale hi dekh chuke hai
    int i = 1; // Left boundary of the window
    int j = k; // Right boundary of the window

    while (j < n) {
        // If the previous negative number is still in the window, use it
        if (p >= i) {
            ans[i] = arr[p];
        } else {
            // If the previous negative goes out of the window, find a new one
            p = -1;
            for (int x = i; x <= j; x++) {
                if (arr[x] < 0) {
                    p = x;
                    break;
                }
            }
            ans[i] = (p != -1) ? arr[p] : 0;
        }

        // Move the window forward
        i++;
        j++;
    }

    // Step 3: Print the results
    for (int i = 0; i < n - k + 1; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
