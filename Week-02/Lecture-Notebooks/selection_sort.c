// selection sort
// swap
// display
// main

#include <stdio.h>

void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void selectionSort(int arr[], int arrS){

    int i,j,min;

    for(i = 0; i<arrS-1;i++){
        min=i;

        for(j=i+1;j<arrS;j++){

            if(arr[min]>arr[j])
            min = j;
        }

        swap(&arr[min],&arr[i]);

    }

}


void display(int arr[], int arrS){
    int i;
    for(i =0 ; i<arrS;i++){
        printf("%d",arr[i]);
    }
}

int main(){
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
    // printf("%d",arrSize);
    selectionSort(arrNum,arrSize);
    display(arrNum,arrSize);
}
