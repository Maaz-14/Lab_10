#include<stdio.h>
void printHello(int n);
void printWorld(int n);

void printHello(int n){
    if(n==0){
        return;
    }
    printf("Hello\t");
    printWorld(n-1);
}

void printWorld(int n){
    if(n==0){
        return;
    }
    printf("World\t");
    printHello(n-1);
    return;
}
int main(){
    printHello(5);
    return 0;
}