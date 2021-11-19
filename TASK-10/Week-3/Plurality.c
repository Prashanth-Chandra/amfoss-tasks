#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(int argc,string argv[]){
    if (argc < 2){
        printf("Usage: plurality [candidate ...]\n");
        return 0;
    }

    int candid = argc - 1;
    if (candid > 9){
        printf("Maximum number of candidates is %i\n", 9);
        return 0;
    }
    string names[candid];
    int votes[candid];
    int n=get_int("Number of voters: ");
    for(int i=0;i<candid;i++){
        //candidate[i].name=argv[i+1];
        //candidate[i].votes=0;
        names[i]=argv[i+1];
        votes[i]=0;
    }
    for(int i=0;i<n;i++){
        bool x=true;
        string v=get_string("Vote :");
        int y=0;
        int wrongcnt=0;
        while(x){
            if(strcmp(names[y],v)==0){
                x=false;
                votes[y]+=1;
                //printf("%s,%s,%d\n",names[y],v,votes[y]);
            }else{
                y++;
                wrongcnt++;
            }
            if(wrongcnt==candid){
                printf("No Candidate With That Name So Enter Again\n");
                i--;
                x=false;
            }
        }
    }
    //printf("Check point 1\n");
    // for(int i=0;i<n;i++){
    //     string v=get_string("Vote: ");
    //     for(int j=0;j<candid;j++){
    //         //if (strcmp(candidate[i].name,v)==0){
    //         if (strcmp(names[j],v)){
    //             //candidate[i].votes++;
    //             //printf("Check point 2\n");
    //             votes[j]+=1;
    //             //printf("Votes of %s given to %s is %d\n",v,names[j],votes[j]);
    //         }
    //     }
    // }
    //printf("Check point 3\n");
    int temp=0;
    for(int i=0;i<candid;i++){
        if(votes[i]>temp){
            temp=votes[i];
        }
        //printf("%s got %d votes\n",names[i] , votes[i] );

        //THE ABOVE LINE IS THE NUMBER OF VOTES
    }
    for(int i=0;i<candid;i++){
        if(temp==votes[i]){
            printf("%s\n",names[i]);
        }
    }


}