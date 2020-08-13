#include <stdio.h>
void selectio_sort(int* a);
int binary_search(int a[], int low, int high, int key);
int main()
{
    int key, index, i, high;
    int a[20];
    printf("Enter total no of Elements : ");
    scanf("%d", &high);
    printf("Enter Elements:\n");
    for(i=0; i<10;i++)
    scanf("%d",&a[i]);
    printf("Enter key value:  ");
    scanf("%d",&key);
    selection_sort(a);
    index = binary_search(a, 0, high,key);
    if(index >= 0)
    printf("Element found at : %d ", index);
    else
    printf("Element not found");
    return 0;
}
int binary_search(int a[], int low, int high, int key)
{
    int mid;
   if (low > high){
       return -1;
   }
   mid = (low + high) / 2;
   if (key == a[mid]){
       return mid + 1;
   }
   else if (key < a[mid]){
       return binary_search(a, low, mid-1, key);
   }
   else if(key > a[mid]){
       return binary_search(a, mid+1, high, key);;
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