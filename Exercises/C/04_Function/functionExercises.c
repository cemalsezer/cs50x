#include <stdio.h>

int main(){
    double age;
    char nickName[20];
    printf("Adiniz: ");
    scanf("%s",&nickName);
    printf("Yasiniz: ");
    scanf("%lf",&age);

    drivingLic(nickName,age);
}


void drivingLic(char name[],double age){
    if(age>=18){
        printf("Tebrikler %s, ehliyet alabilirsin! ",name);
    }
    else{
        printf("Ehliyet alamazsin :(");
    }
}