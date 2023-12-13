#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n, ans = 0;
    cin >>n;
    int i = 0;
    while(n != 0){
        int d = n%10;
        if(d==1){
        ans += pow(2 , i);
        }
        n = n /10;
        i++;
    }
    cout<<"The decimal equivalent is : " <<ans;
    cout<<endl;
}