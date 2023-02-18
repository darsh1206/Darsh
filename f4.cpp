#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int a[10]={0,0,0,0,0,0,0,0,0,0};
    int index=0,min=INT_MAX;
    printf("Enter 10 numbers: ");
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    return 0;
}