#include <stdio.h>
void selectio_sort(int* a);
int binary_search(int* a, int key);
int main()
{
    int key, index, i;
    int a[10];
    printf("pass 10 integers in ascending order:\n");
    for(i=0; i<10;i++)
    scanf("%d",&a[i]);
    printf("Enter any integer value: ");
    scanf("%d",&key);
    selection_sort(a);
    index = binary_search(a, key);
    if(index >= 0)
    printf("%d is at position %d in the given array", key, index);
    else
    printf("The integer doesnot exist in the given array of integers");
    return 0;
}
int binary_search(int* a, int key)
{
   int start=0 , end = 9 , mid;
       while(start<=end){
           mid = (start+end)/2;
           if (key ==a[mid]){
               return mid; 
               break;
           }
           else if(key < a[mid]){
               end = mid - 1;
           }
           else{
               start = mid +1;
           }
       }
       if(key  !=  a[start]){
           return -1;
       }
} 

void selection_sort(int *a)
{
    int i, j, temp;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;  
            }
        }
    }
    return;
}