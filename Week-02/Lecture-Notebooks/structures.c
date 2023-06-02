// #include <cs50.h>
// #include <stdio.h>
// #include <string.h>

struct employee{
        char name;
        int yas;
        char job;
};

int main(){
    struct employee cemal;

    cemal.name="Cemal";
    cemal.yas=95;
    cemal.job="doctor";
   printf("%s %d %s",cemal.name, cemal.yas, cemal.job);    
}


