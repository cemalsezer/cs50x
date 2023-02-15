#include <stdio.h>

int main(){
    int symbol[3][3];
    
    symbol[0][0]=1;
    symbol[0][1]=0; 
    symbol[0][2]=0;
    symbol[1][0]=1;
    symbol[1][1]=1;
    symbol[1][2]=0;
    symbol[2][0]=1;
    symbol[2][1]=1;
    symbol[2][2]=1;

    int rows= sizeof(symbol)/sizeof(symbol[0]);
    int columns= sizeof(symbol )/ sizeof(symbol[0][0]);


    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <3; j++)
        {
            printf("%d", symbol[i][j]);
        }
        printf("\n");
    }
    return 0;
}