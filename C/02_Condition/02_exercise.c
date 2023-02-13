#include <stdio.h>

int main (void){

    // int hiz = 190;

    // if (hiz>100)
    // {
    //     printf("Hiz limitini astin\n");
    // }
    // else{
    //     printf("Hiz limitini asmadin");
    // }
    
    /* ehliyet kontrol */

    int yas=0;
    printf("Yasinizi giriniz: ");
    scanf("%d",&yas);
    
    if(yas>=18){
        printf("Ehliyet alabilirsiniz");
    }
    else if (yas<0)
    {
        printf("Lutfen girdiginiz bilgileri kontrol edin");
    }
    else{
        printf("Ehliyet alamazsiniz!");
    }
    

}