#include<iostream>
#include<climits>
using namespace std;
int main(){
    /*
    agar number bahut jada ho to mod nikae ke liye
    (a*b)%c=(a%b * a%c)%c
    (a+b)%c=(a%b + a%c)%c
    where a and b is very large number 
    */
    int x=INT_MAX;
    cout<<(x+2)%5<<"\n";//wrong approch
    cout<<(x%5 +2%5)%5;//this is write approch 
/*(a-b)%c =(a%c-b%c)%c xxxx wrong for sub
write approch
(a-b)%c =(a%c-b%c +c )%c
*/

}