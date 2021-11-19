#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[]){
    if(argc!=2){
        printf("Usage: ./caesar key ");
        return 0;
    }
    if(isdigit(argv[1])){
        
    }
    else{
        printf("Usage: ./caesar key");
        return 0;
    }

    string a=get_string("plaintext: ");
    int b;
    int h = atoi(argv[1]);
    //printf("%d",h);
    printf("ciphertext: ");
    for(int i=0;i<strlen(a);i++){
        b=0;
        int x=(int)(a[i]);
        //printf("%d \n",x);
        if(isalpha(a[i])){
            if(x<91){
                if(x+h>90){
                    b=(x+h-26);
                    //printf("%c for %c i.e. %d for %d \n",b,a[i],b,x);
                    printf("%c",b);
                }
                else{
                    b=(x+h);
                    //printf("%c for %c i.e. %d for %d \n",b,a[i],b,x);
                    printf("%c",b);
                }
            }
            else if(x>96){
                if((int)(x+h)>122){
                    b=(x+h-26);
                    //printf("%d + %d = %d but it is showing %d\n",x,h,x+h,b);
                    //printf("%c for %c i.e. %d for %d \n",b,a[i],b,x);
                    printf("%c",b);
                }
                else{
                    b=(x+h);
                    //printf("%c for %c i.e. %d for %d \n",b,a[i],b,x);
                    printf("%c",b);
                }
            }
            else{
                b=(x+h);
                //printf("%c for %c i.e. %d for %d \n",b,a[i],b,x);
                printf("%c",b);
            }
        }
        else{
            printf("%c",a[i]);
        }

    }
    printf("\n");


}