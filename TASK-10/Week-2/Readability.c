#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <cs50.h>


int c_l(string st);
int c_w(string st);
int c_s(string st);
int ans(int num_l, int num_w, int num_s);

int main(){
    string st = get_string("string: ");
    int num_l = c_l(st);
    int num_w = c_w(st);
    int num_s = c_s(st);
    int grade = ans(num_l, num_w, num_s);
    if (grade < 1){
        printf("Before Grade 1\n");
    }
    else if (grade >= 16){
        printf("Grade 16+\n");
    }
    else{
        printf("Grade = %d\n", grade);
    }
}


int c_l(string st){
    int num_l = 0;
    for (int i = 0, n = strlen(st); i < n; i++)
        if (isalpha(st[i])){
            num_l ++;
        }
    return num_l;
}

int c_w(string st){
    int num_w = 0;
    int n=strlen(st);
    for (int i = 0; i < n; i++){
        if (st[i] == '-' && isalpha(st[i - 1])) {}//this is basicaly to ignore the "-" so that it will not be considered as an extra letter

        else if (st[i] == 39 && isalpha(st[i - 1])) {}//the secod half of the statement is used to check if there id any word before the special char '

        else if ((!isalpha(st[i]) && isalpha(st[i - 1]))){
            num_w ++;
        }

    }
    return num_w;
}

int c_s(string st){
    int num_s = 0;
    for (int i = 0, n = strlen(st); i < n; i++){
        int character = st[i];
        if (character == 46 || character == 33 || character == 63){
            num_s ++;
        }
    }
    return num_s;
}

int ans(int num_l, int num_w, int num_s){
    float words_per_100 = num_w / 100.0;
    float L = num_l / words_per_100;
    float S = num_s / words_per_100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    return index;
}