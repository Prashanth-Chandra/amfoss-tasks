#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>
#include <string.h>


int iscorrcard(string n){
    int sum1=0;
    int sum2=0;
    for(int i=0;i<strlen(n);i++){
        if(i%2==0){
            if(((int)n[i])-48>=5){
                int x=(2*((int)n[i]-48));
                int a1=x%10;
                int a2=x/10;
                sum1+=a1+a2;
            }
            else{
                sum1=sum1+(2*((int)n[i]-48));//-48 because int(n[i]) is giving its ascii
            }
        }
        else{
            sum2+=(int)n[i]-48;
        }
    }
    printf("%d,%d\n",sum1,sum2);
    if((sum1+sum2)%10==0){
        return 0;
    }
    return 1;
}

int iscorrstart(string n){
    int i=strlen(n);
    if(i==15 && n[0]==3 && (n[1]==7 || n[1]==4)){
        return 0;
    }
    if(i==16 && n[0]==5 && (n[1]==1 || n[1]==2 || n[1]==3 || n[1]==4 || n[1]==5)){
        return 1;
    }
    if(i==13 && n[0]==3){
        return 2;
    }
    return 3;
}


int main(void)
{
    string n;
    while(true){
        n=get_string("Number: ");
        int cnt=0;
        for(int i=0;i<=strlen(n);i++){
            if((strlen(n)==16 || strlen(n)==15 || strlen(n)==13) && isdigit(n[i])!=0 && isalpha(n[i])==0){
                cnt++;
            }
        }
        if(cnt==16 || cnt==15 || cnt==13){
            break;
        }
    }

    int corcd=iscorrcard(n);
    if(corcd==0){
        int ca=iscorrstart(n);
        if(ca==0){
            printf("AMERICAN EXPRESS\n");
        }
        else if(ca==1){
            printf("MASTERCARD\n");
        }
        else if(ca==3){
            printf("VISA\n");
        }
        else{
            printf("INVALID\n");
        }
    }
    else{
        printf("INVALID\n");
    }
}