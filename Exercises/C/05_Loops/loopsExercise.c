#include <stdio.h>

int main(){
        int rows,columns;
        char symbol;

        printf("Satir sayisini giriniz: ");
        scanf("%d", &rows);
        printf("Sutun sayisini giriniz: ");
        scanf("%d", &columns);
        scanf("%c");
        printf("Sembolu giriniz: ");
        scanf("%c", &symbol);

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                printf("%c",symbol);
            }
            printf("\n");
        }
    
}