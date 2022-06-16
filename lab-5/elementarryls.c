#include<stdio.h>
int main()
{
    int arr[]={10, 20, 30, 40, 50};
    int x;
    int i, n=5;
    printf("The given array is: ");
     for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\nEnter the data to search: ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
        if(x==arr[i])
    {
       printf("\nFound\n");
       exit (0);
    }
    printf("\nNot Found\n");
    return 0;
}

