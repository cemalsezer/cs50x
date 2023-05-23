// #include <stdio.h>
// #include <cs50.h>
// #include <math.h>
int main(void){
long userInfo = get_long("Kredi Kart Numarnızı Giriniz:");
long control = userInfo;
int counter = 0;
int first_second=0;
//Basamakları hesaplıyoruz
while(control>0) {
if(control<100 && control>10){
first_second=control;
}
counter++;
control/=10;
}

if((counter != 13) && (counter!=15) && (counter !=16)){
printf("INVALID\n");
}
//LUHN CONTROL
else {
int a = 0;
int b = 0;
int c = 0;
while(userInfo > 0){
a+=userInfo%10;
userInfo /=10;
if(userInfo>0){
c = (userInfo%10)*2;
b+=c/10;
b+=c%10;
userInfo/=10;
}
}
int kalan=(a+b)%10;
if(kalan!=0){
printf("INVALID\n");
}
else if(kalan==0){
if((counter==15)&& ((first_second==34)||(first_second==37))){
printf("AMEX\n");
}
else if((counter==16)&& ((first_second==51)|| (first_second==52)|| (first_second==53)||(first_second==54)||(first_second==55))){
printf("MASTERCARD\n");
}
else if((counter==13 || counter == 16) && first_second/10==4){
printf("VISA\n");
}
else {
printf("INVALID\n");
}
}
}}
