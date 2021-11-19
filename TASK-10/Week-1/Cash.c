#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change_float;
    do
    {
        printf("Cash Owned: ");
        scanf("%f", &change_float);
    } while (change_float < 0.01);
    
    change_float=(round(change_float*100));
    int change=(int)(change_float);
    int c_25=change/25;
    change-=25*c_25;
    int c_10=change/10;
    change-=10*c_10;
    int c_5=change/5;
    change-=5*c_5;
    int c_1=change;
    printf("%d\n",c_25+c_10+c_5+c_1);    
}