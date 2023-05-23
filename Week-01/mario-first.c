// #include <cs50.h>
// #include <stdio.h>
int main(void)
{
int userInfo=0;
do {
userInfo = get_int("Yüksekliği Giriniz:\n");
}
while (userInfo<1 || userInfo>8);
for(int stepControl=1; stepControl<=userInfo; stepControl++){
for(int stepSpace=userInfo; stepSpace>stepControl; stepSpace--){
printf(" ");
}
for (int step=1; step<=stepControl; step++){
printf("#");
}
printf("\n");
}
}
