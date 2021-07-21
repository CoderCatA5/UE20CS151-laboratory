#include <stdio.h>
#include <string.h>

struct cricket{
    char pname[20];char tname[20];float bavg;
};

void main(){
    struct cricket s[5],t;
    int n=5;
    float avg;

    printf("Enter Player Data\n",n);
    for (int i=0;i<n;i++){
        printf("Enter Name, Team and Batting Average for Player %d: ",i+1);
        scanf("%s %s %f",s[i].pname, s[i].tname, &avg);
        s[i].bavg = avg;
    }

    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i;j++){
            if(strcmp(s[j-1].tname,s[j].tname)>0){
                t=s[j-1];
                s[j-1]= s[j];
                s[j] = t;
            }
                
        }
    }

    printf("\nPlayer List After Sorting According to Team");
    for(int i=0;i<n;i++){
        printf("\n%-20s %-20s %.2f",s[i].pname,s[i].tname,s[i].bavg);
    }
}