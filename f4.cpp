
//header files
#include<stdio.h>
#include<iostream>
using namespace std;

// main function
int main(){
    // declaring and initializing array and other variables
    int a[10]={0,0,0,0,0,0,0,0,0,0};
    int index=0,min=INT_MAX;

    printf("Enter 10 numbers: ");
    // for loop to take input and get lowest number
    for(int i=0;i<10;i++){
        cin>>a[i];
        // condition to find minimum number
        if(min>a[i]){
            min=a[i];
            index=i;
        }
    }
    // printing lowest number and index 
    printf("\nThe lowest value is %d at index %d", min, index);
    return 0;
}