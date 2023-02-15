#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int max=10;
    int min=1;
    int trueNumber;
    int guess;
    int numberOfGuess;

    srand(time(0));

    trueNumber=(rand()%max)+min;

    do{
        printf("Bir sayi giriniz: ");
        scanf("%d",guess);
         if(guess>trueNumber){
            printf("Asagi in \n");
         }
            else if(guess<trueNumber){
             printf("Yukari cik \n");
            }
            else{
            printf("Bildin \n");  
            }
            numberOfGuess++;
    }while (guess != trueNumber);
    
    printf("Dogru cevap: %d\n",trueNumber);
    printf("%d denemde buldun",numberOfGuess);
    

    return 0;
}