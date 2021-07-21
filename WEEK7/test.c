 #include<stdlib.h>
 #include<stdio.h>

struct Array{
    int *A;
    int size;
    int length;
};

void display(struct Array arr){
    int i;
    printf("\n Elements are \n");
    for ( i = 0; i < arr.length; i++)
    {
        printf("%d",arr.A[i]);
    }
}
void append(struct Array *arr,int element){
    printf("\nAppend\n");
    if(arr->length==arr->size)printf("arr len maxed:");
    else {
        arr->A[arr->length]=element;
        arr->length++;
    }   
}

void insert(struct Array *arr,int index,int element){
    if (index<arr->length-1<index && arr->length+1<arr->size)
    {
        for(int i=arr->length;i>index;i--)arr->A[i]=arr->A[i-1];
        arr->A[index]=element;
        arr->length++;
    }else printf("arr len maxed:");
    
}
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int LinearSearch(struct Array *arr,int key){
    for(int i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i],&arr->A[0]);
            return i;
        }
    }
    return -1;
}
int BinarySearch(struct Array *arr,int key){
    int low=0;
    int high=arr->length-1;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if (key==arr->A[mid])return mid;
        else if(key<arr->A[mid])high=mid-1;
        else low=mid+1;
    }
    return -1;

}
int main(){
    struct Array arr;
    int n,i;
    printf("Enter Size OF array;");
    scanf("%d",&arr.size);

    arr.A=(int *)malloc(arr.size*sizeof(int));
    printf("Enter no of elements:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr.A[i]);
    }
    arr.length=n;
    display(arr);
    printf("%d",BinarySearch(&arr,5));

    free(arr.A);

    




    return 0;

}