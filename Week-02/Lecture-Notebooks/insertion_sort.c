#include <stdio.h>

swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}


insertionSort(int arr[], int size){
    int i,j;
    for (i = 1; i < size ; i++)
    {
        for(j=i;j>0;j--){
            if(arr[j]<arr[j-1])
            swap(&arr[j],&arr[j-1]);
        }
    }
    
}

display(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
    }
}

int main(void){
    int arrSize;
    printf("Enter the array size: ");
    scanf("%d",&arrSize);
    int arrNum[arrSize];
    int i=0;
    while(i<arrSize){
        printf("Enter nums: ");
        scanf("%d",&arrNum[i]);
        i++;
    }
    insertionSort(arrNum,arrSize);
    display(arrNum,arrSize);
}