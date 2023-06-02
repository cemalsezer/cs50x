// #include <cs50.h>
// #include <stdio.h>
// #include <string.h>

int main(void){

    int myAge=65;
    int* ptr = &myAge;//pointer değişkeni oluşturduk ve myAge değişkeninin adresini atadık

    printf("%p",ptr); //değişkenin adresini verir
    printf("\n"); 
    printf("%p",&ptr); //pointerin adresini verir
    printf("\n");
    printf("%d",*ptr);//pointerin gösterdiği değeri verir


    
}
