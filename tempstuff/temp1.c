
int arr[4][2];

int arr1[4][2]={{1,2},{3,4},{5,6},{7,8}};
int arr2[4][2]={1,2,3,4,5,6,7,8};
int arr3[][2]={1,2,3,4,5,6,7,8};


//row major notation
//m and n be no of rows and cols respectively
//arr[i][j]=Base address arr + ((i*no of cols)+j)*size int


//arr[3][1]
//*(*(arr+3)+1)

malloc(sizeof(datatype))
//return null pointer on error
//malloc is a void pointer


calloc(n,sizeof(datatype))
//calloc an array
//return null pointer on error
//calloc is a void pointer

///realloc


