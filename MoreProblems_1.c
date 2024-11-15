#include<stdio.h>

int recursion(int *arr,int size){
    if(size==0) return 0;
    else 
    return *arr + recursion(arr +1 , size-1);
}
int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[100];
    printf("Array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int result=recursion(arr,size);
    printf("elements are %d ",result);
}