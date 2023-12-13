//C Program to return a 2d array 
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int q=0;
int mdz(int arr[][100],int x);
int main(){
    pf("Tell how rows and columns you want ");
    scanf("%d",&q);
    int arr[q][q];
    for(int i=0;i<q;i++){
        for(int j=0;j<q;j++){
            pf("The element at (%d,%d) is :",i,j);
            sf("%d",&arr[i][j]);
        }
    }
    pf("The matrix is given by : \n");
    for(int i=0;i<q;i++){
        for(int j=0;j<q;j++){
            pf("%d ",arr[i][j]);
        }
        pf("\n");
    }
    mdz(arr,q);    
    pf("The matrix is given by : \n");
    for(int i=0;i<q;i++){
        for(int j=0;j<q;j++){
            pf("%d ",arr[i][j]);
        }
        pf("\n");
    }
    return 0;
}
int mdz(int arr[][100],int x){
    for(int i=0;i<x;i++){
        arr[0][i]=0;
    }
    return 0;
}