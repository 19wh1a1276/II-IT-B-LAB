#include <stdio.h>
int recur_ls(int a[], int x, int i, int n)
{
    int p=0;
    if(i>=n)
    {
        return 0;
    }
    else if (a[i]==x)
    {  
      p=i+1;
        return p;
    }
    else
    {
        return recur_ls(a, x, i+1, n);
    }
    return p;
}
int main()
{
    int n, x, p, m = 0, a[10];
    printf("Enter the total number elements : ");
    scanf("%d", &n);
    printf("Enter array elements : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the target element : ");
    scanf("%d", &x);
    p=recur_ls(a, x, 0, n);
    if (p!=0)
    {
        printf("Element found at : %d ", p);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}
