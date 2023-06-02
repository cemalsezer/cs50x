// #include <stdio.h>
// #include <cs50.h>

int linearSearch(int arraysNums[],int arraysDims,int searchNum){
    int i;
    for(i=0;i<arraysDims;i++){
        if(arraysNums[i]==searchNum)
            return 1;
    }
        return -1;
}




int main(void){

    int arraysDim;

    printf("Enter dimmension of array: ");
    scanf("%d",&arraysDim);

    int arraysNum[arraysDim];
    int i=0;
    
    while(i<arraysDim){
       printf("Enter numbers of array: ");
       scanf("%d",&arraysNum[i]);
       i++;
   }
    int searchNum;
    printf("Enter the number of searching: ");
    scanf("%d",&searchNum);
    int result=linearSearch(arraysNum,arraysDim,searchNum);
    if(result==-1){
        printf("Not found!");
    }
    else{
        printf("Founded!");
    }
    

}
