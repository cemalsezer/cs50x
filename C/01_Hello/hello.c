#include <stdio.h>

int main(void){
    // printf("Hello Everyone!");

/*
    FORMAT BELİRLEYİCİLER
    %d : int
    %c : char3
    %f : float
*/

/* aritmetik işlemler */
    printf("%d\n", 10*4);
    printf("%d\n", 10/4);
    printf("%d\n", 10+4);
    printf("%d\n", 10-4);


    int x;
    printf("Bir sayi giriniz:");
    scanf("%d",&x); //kullanıcıdan input alma
    printf("Girdiginiz sayi:%d\n",x); //kullanıcıdan alınan inputu yazdırma



}