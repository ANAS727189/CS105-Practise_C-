#include<stdio.h>
double convert(double fah);
int main(){
    double fah;
    scanf("%lf" , &fah);
    double cel = convert(fah);
    printf("%lf" , cel);
    return 0;
}
double convert(double fah){
    double cel = (fah - 32) * 5/9;
    return cel;
}