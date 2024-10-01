#include<stdio.h>

int main(){
    int temprature;
    printf("enter the temprature in celcius : ");
    scanf("%d",&temprature);
    int fornehiet=(temprature*9/5)+32;
    printf("temprature in forenhiet is %d \n",fornehiet);
    return 0;
}