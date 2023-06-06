#include <stdio.h>

int a[]={8,7,6,5,4,3,2,1};
int b[8];

void merge(int start, int mid, int end){
    int i,j,k;
    for(i=start;i<=end;i++){
        i=start;
        j=mid+1;
        k=start;
    }
    while (i<=mid && j<=end)
    {
        if(b[i]<=b[j]){
            a[k++]=b[i++];
        }
        else{
            a[k++]=b[j++];
        }
    }
    while (i<=mid)
    {
        a[k++]=b[i++];
    }
 
}
    
void divide( int start, int end){
    if(start<end){
         
        int mid=(start+end)/2;
        divide(start, mid);
        divide(mid+1, end);

        merge(start, mid, end);
    }
}

int main(){
    divide(0,8);
    for(int i=0; i<=7; i++)
        printf("%d", a[i]);

        return 0;
}
