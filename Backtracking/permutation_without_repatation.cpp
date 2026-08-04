// #include<iostream>
// using namespace std;
// void permutation(string input,string output){
//     if(input.size()==0){
//         cout<<output<<"\n";
//         return;
//     }
//     for(int i=0;i<input.size();i++){
//         char ch=input[i];
//         string left=input.substr(0,i);
//         string right=input.substr(i+1);
//         string ROS=left+right;
//         permutation(ROS,output+ch);
//     }
// }

// int main() {
//     permutation("abc","");
//     return 0;
// }



#include<iostream>
using namespace std;

void permutataion(string input,string output){
    if(input.size()==0){
        cout<<output<<" \n";
    }
    for(int i=0;i<input.size();i++){
        char ch=input[i];

        string left=input.substr(0,i);
        string right=input.substr(i+1);

        string ros=left+right;

        permutataion(ros,output+ch);
    }
}
int main() {
    permutataion("abcd","");
    return 0;
}