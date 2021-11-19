#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc,string argv[]){
    if(argc!=2){
        printf("Usage: ./substitution key \n");
        return 0;
    }
    if(strlen(argv[1])!=26){
        printf("Key must contain 26 characters\n");
        return 0;
    }
    string s=get_string("plaintext: ");
    printf("ciphertext: ");
    for(int i=0;i<=strlen(s);i++){
        if(isalpha(s[i])){
            int a=(int)s[i];
            if(islower(s[i])){
                printf("%c",tolower(argv[1][a-97]));
            }
            if(isupper(s[i])){
                printf("%c",argv[1][a-65]);
            }
        }
        else{
            printf("%c",s[i]);
        }
    }
    printf("\n");
}