#include <stdio.h>

void bubbleSort(int arr[],int arrSize){
    int i,j;
    for(i=0;i<arrSize;i++){
        for(j=1;j<arrSize-i;j++){
            if(arr[j-1]>arr[j]){
                 int temp;
                temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
   
            }
        }
    }
}



display(int arr[],int arrSize){
    int i;
    for(i=0;i<arrSize;i++){
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
    bubbleSort(arrNum,arrSize);
    display(arrNum,arrSize);
}