#include <stdio.h>
#include <stdlib.h>

int binarySearch22(int arr[], int l, int r, int x)
{

    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
        {
            if (x < 22)
                printf("THE ELEMENT IS LESS THAN 22 ");
            else
                printf("THE ELEMENT IS GREATER THAN 22");
            return mid;
        }

        if (arr[mid] > x)
            return binarySearch22(arr, l, mid - 1, x);

        return binarySearch22(arr, mid + 1, r, x);
    }
    return -1;
}
int binarySearchEven(int arr[], int l, int r, int x)
{

    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
        {
            if (x % 2 == 0)
                printf("THE ELEMENT IS EVEN ");
            else
                printf("THE ELEMENT ODD ");
            return mid;
        }

        if (arr[mid] > x)
            return binarySearchEven(arr, l, mid - 1, x);

        return binarySearchEven(arr, mid + 1, r, x);
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 10, 12, 15, 18};
    int length = sizeof(arr) / sizeof(arr[0]);
    int x = 18;

    printf(" FOUND AT %d INDEX \n", binarySearch22(arr, 0, length - 1, x));

    printf(" FOUND AT %d INDEX \n", binarySearchEven(arr, 0, length - 1, x));
}