#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char text[100];
    int key;
    printf("Enter the text to be encrypted: ");
    scanf("%[^\n]s", text);
    printf("Enter the key: ");
    scanf("%d", &key);
    for(int i = 0; i < strlen(text); i++){
        if(isalpha(text[i])){
            if(isupper(text[i])){
                text[i] = ((text[i] - 'A' + key) % 26) + 'A';
            }
            else{
                text[i] = ((text[i] - 'a' + key) % 26) + 'a';
            }
        }
    }
    printf("Encrypted text: %s\n", text);
    return 0;
}