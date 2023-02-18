
#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int a[10]={0,0,0,0,0,0,0,0,0,0};
    int index=0,min=INT_MAX;
    printf("Enter 10 numbers: ");
    for(int i=0;i<10;i++){
        cin>>a[i];
        if(min>a[i]){
            min=a[i];
            index=i;
        }
    }
    printf("\nThe lowest value is %d at index %d", min, index);
    return 0;
}