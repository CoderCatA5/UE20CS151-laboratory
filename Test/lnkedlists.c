#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*first;

void create(int A[],int n){
    int i;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;


    for(i=1;i<n;i++){
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;

    }


}
void display(struct Node *p){
    while (p)
    {
        printf("%d ",p->data);
        p=p->next;

    }
    printf("\n");
}
void recdisplay(struct Node *p){
    if (p!=NULL){
        printf("%d ",p->data);
        recdisplay(p->next);
        }
}

int count(struct Node *p){
    int count=0;
    while(p){
        count++;
        p=p->next;
    }
    return count;
}
int sum(struct Node *p){
    int ans=0;
    while(p){
        ans=ans+p->data;
        p=p->next;
    }
    return ans;
}
int maxL(struct Node *p){
    int max=INT_MIN;
    while(p){
        if(p->data>max)max=p->data;
        p=p->next;
    }
    return max;

}

struct Node *search(struct Node *p,int key){
    struct Node *q=NULL;
    while(p){
        if (key==p->data)
        {
            q->next=p->next;
            p->next=first;
            first=p;
            //for header node.
            return p;
        
        }
        q=p;
        p=p->next;
        
    }
}
int RmaxL(struct Node *p){
    int x;
    if(p==0)return INT_MIN;
    
        x=RmaxL(p->next);
        return x>p->data ? x:p->data;

}

int main(){
    int A[]={3,5,7,10,15};
    create(A,5);

    display(first);

    printf("%d %d",count(first),sum(first));



    return 0;

}