#include <stdio.h>
int linear_search(int* a, int key);
int main()
{
    int key, index, i;
    int a[10];
    printf("pass 10 integers:\n");
    for(i=0; i<10;i++)
    scanf("%d",&a[i]);
    printf("Enter any integer value: ");
    scanf("%d",&key);
    index = linear_search(a, key);
    if(index >= 0)
    printf("%d is at position %d in the given array", key, index);
    else
    printf("The integer doesnot exist in the given array of integers");
    return 0;
}
int linear_search(int* a, int key)
{
    int index= 0;
    int end = 9;
    while(index <end && key != a[index])
    index++;
    if(key != a[index])
    index = -1;
    return index;
}
