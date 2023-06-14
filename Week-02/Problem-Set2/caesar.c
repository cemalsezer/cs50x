#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string argv[]){
    if (argc!=2){
        printf ("Usage: ./caesar key\n");
        return 1;
    }
    int sayib = atoi(argv[1]);
    int alib = strlen(argv[1]);
    
    if(sayib==0){
        printf ("Usage: ./caesar key\n");
        return 0;
    }
    if (sayib<alib){
        printf("Usage: ./caesar key\n");
        return 0;
    }
    
    int key = atoi(argv[1]);
    if(key>=26){
        key = key%26;
    }
    string text = get_string("plaintext: ");

    printf("ciphertext: ");

    for(int i=0, n=strlen(text);i<n;i++){

        if(text[i]>='a'&&text[i]<='z'){
            int kucuk = 'z'-text[i];
            // printf("\n kucuk: %d",kucuk);
            // printf("\n key: %d",key);

            if(key>kucuk){
                int k=(key-kucuk)-1;
                //printf("\n k: %d",k);
                text[i]='a';
                printf("%c",text[i]+k);
                continue;
        }
            printf("%c",text[i]+key);
             continue;
        }
        else if(text[i]>='A'&&text[i]<='Z'){

            int buyuk = 'Z'-text[i];
            if(key>buyuk){
                int b=(key-buyuk)-1;
                text[i]='A';
                printf("%c",text[i]+b);
                continue;
            }
        printf("%c",text[i]+key);
    }
        else{
            printf("%c",text[i]);
        }
    }
    printf("\n");
    
}