// #include <stdio.h>
// #include <cs50.h>
// #include <math.h>
int main(void){
float userInfo = get_float("Para Üstünü Giriniz(ör:0.82):");
int hesap = round(userInfo*100);
int counter = 0;
while (hesap>=25){
hesap -=25;
counter++;
}
while (hesap>=10) {
hesap-=10;
counter++;
}
while(hesap>=5) {
hesap-=5;
counter++;
}
while(hesap >=1){
hesap-=1;
counter++;
}
printf("Gerekli madeni para miktarı %i\n",counter);
}
