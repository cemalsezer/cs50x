#include <stdio.h>

int main(void){
    printf("Hello Everyone!");


/* aritmetik işlemler */
    printf("%d\n", 10*4);
    printf("%d\n", 10/4);
    printf("%d\n", 10+4);
    printf("%d\n", 10-4);


    int x;
    printf("Bir sayi giriniz:");
    scanf("%d",&x); //kullanıcıdan input alma
    printf("Girdiginiz sayi:%d\n",x); //kullanıcıdan alınan inputu yazdırma


/* Veri Türleri */
    int age=12;
    float weight=50.5;
    char sign='C';
    char kdizisi[] = "csezer";

    double height=1523.5; // double > float

/*
    FORMAT BELİRLEYİCİLER
    %d : int
    %c : char3
    %f : float
    %s : string

    %lf: double
    %d : bool
    
*/

}