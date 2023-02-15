#include <stdio.h>
#include <stdio.h>

struct Employee{

    char name[20];
    int age;

};


int main(){
    struct Employee employeeOne;

    strcpy(employeeOne.name,"Cemal");
    employeeOne.age=25;

    printf("%s ",employeeOne.name);
    printf("%d\n",employeeOne.age);

}

