#include <stdio.h>

int main(){
    int city[]={34,6,35,13};
    

    for (int i = 0; i<sizeof(city)/sizeof(city[0]); i++)
    {
        printf("\n %d",city[i]);
        // printf("\n");
    }
    

    return 0;
}