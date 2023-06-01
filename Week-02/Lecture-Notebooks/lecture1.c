// #include <stdio.h>
// #include <cs50.h>

void chart(int scr){
        for(int i=1;i<=scr; i++){
         printf("#");
        }
        printf("\n");
    }

int main(void){
    int scores[3];
    for(int i = 0;i<3;i++){
        scores[i] = get_int("Score %i: ",i+1);
    }
    
    for(int i = 0;i<3;i++){
        printf("Scores %i: ",i+1);
        chart(scores[i]);
    }
   

}

