#include <stdio.h>
// #include <cs50.h>

int  linearSearch(int arrays[], int arrSize, int searchNr){
    for(int i =0; i<arrSize;i++){
        if(arrays[i]==searchNr){
            return 1;
        }
    }
    return -1;
}


int main(void){
    int arraySize;
    printf("Enter the array size: ");
    scanf("%d",&arraySize);
    int arrayNums[arraySize];
    int i=0;
    int searchNum;
    while(i<arraySize){
        printf("Enter nums: ");
        scanf("%d",&arrayNums[i]);
        i++;
    }
    printf("Enter the to search num: ");
    scanf("%d",&searchNum);

   int result = linearSearch(arrayNums,arraySize,searchNum);
    if(result==1){
        printf("Found");
    }
    else{
        printf("Not found");
    }

}
