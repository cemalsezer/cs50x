#include <stdio.h>
#include <stdbool.h>

int binarySearch(int arrayNums[], int start, int end, int searchNum){
    while (end>=start){
        int mid=arrayNums[(start+end)/2];
        if(mid==searchNum)
        return true;
        if(mid<searchNum)
        start++;
        if(mid>searchNum)
        end--;
    }
    return false;
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

    bool sonuc = binarySearch(arrayNums,0,arraySize-1,searchNum);
    if(sonuc)
    printf("found");
    else
    printf("not found");


    return 0;
}