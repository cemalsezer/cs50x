#include <stdio.h>
/* HESAP MAKİNESİ */
int main (void){
    char operator;
    double num1;
    double num2;
    double response=0;

    printf("Hangi islemi yapmak istiyorsun? (* / + -): ");
    scanf("%c", &operator);
    printf("\n Birinci sayiyi gir: ");
    scanf("%lf", &num1);
    printf("\n İkinci sayiyi gir: ");
    scanf("%lf", &num2);

    switch(operator){
        case '*':
        response = num1 * num2;
        printf("\n Sonuc: %.2lf",response);
        break;
         case '/':
        response = num1 / num2;
        printf("\n Sonuc: %.2lf",response);
        break;
         case '+':
        response = num1 + num2;
        printf("\n Sonuc: %.2lf",response);
        break;
         case '-':
        response = num1 - num2;
        printf("\n Sonuc: %.2lf",response);
        break;
        default:
        printf("Yanlis secim yaptin");
        break;
    }
}