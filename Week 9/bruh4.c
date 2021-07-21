#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student{
    char name[50];
    int roll;
};

void display(struct Student *arr,int size){
    for (int i = 0; i < size; i++)
    {
        printf("%s %d \n",(arr+i)->name,(arr+i)->roll);
    }
    
}

void BubblesortINT(struct Student *arr,int size){
    struct Student temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            
            if ((arr+j)->roll>(arr+j+1)->roll)

            {
        
                temp=*(arr+j+1);
                *(arr+j+1)=*(arr+j);
                *(arr+j)=temp;
            }
        }
        
    }
  
}

void BubblesortSTR(struct Student *arr,int size){
    struct Student temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {

            if (strcmp((arr+j)->name,(arr+j+1)->name)>0){
        
                temp=*(arr+j+1);
                *(arr+j+1)=*(arr+j);
                *(arr+j)=temp;
            }
        }
        
    }
  
}

    

int main(){
    
    FILE *fp=fopen("bruh4.csv","r");
    struct Student arr[100];
    int count=0;
    
    if(!fp)printf("Cant open file: /n");
    else{
        char line[1024];
        
        fgets(line,1024,fp);
        while(fgets(line,1024,fp)){
            
            char *temp=strtok(line,",");
            strcpy(arr[count].name,temp);

            temp=strtok(NULL,"\n");
            arr[count].roll=atoi(temp);      

            count++;
        }
    }
    printf("ORIGINAL LIST:\n");
    display(arr,count);
    printf("\n\n");

    printf("SORTED ON NAME:\n");
    BubblesortSTR(arr,count);
    display(arr,count);
    printf("\n\n");


    printf("SORTED ON ROLL:\n");
    BubblesortINT(arr,count);
    display(arr,count);
    
    
}