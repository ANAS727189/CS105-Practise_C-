#include<iostream>
using namespace std;
int main(){
    int n , ans = 0;
    cin>>n;
    int i = 0;
    int a[1000];
    while(n != 0){
      a[i++] = n %2;
      n = n/2;
    }
    for(int j = i - 1;j >= 0;  j--){
        cout<<a[j];
    }cout<<endl;
 return 0;
}
