#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int n;
int a[100];

void create()
{
    int i;
    printf("\nEnter Array Size: ");
    scanf("%d", &n);
    printf("\nEnter %d Array Element: ", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void display()
{
    int i;

    printf("The Array Element are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void insert()
{
    int p, v;
    printf("\nEnter Position and its Value: ");
    scanf("%d%d", &p, &v);

    if (p < 0)
    {
        printf("Invalid Input");
    }

    a[p] = v;
}

void delete ()
{
    int i, p;

    printf("\nEnter the position (Index) of Element : ");
    scanf("%d", &p);

    if (p > n - 1)
    {
        printf("\nInvalid Input");
    }
    else
    {
        for (i = p; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        n = n - 1;
    }
}

int main()
{
    char s;

    while (1)
    {
        printf("\nChoice a Suitable Option : \n A. Create \n B. Display \n C. Insert \n D. Delete \n E. Exit \n");

        scanf("%c", &s);

        switch (s)
        {
        case 'A':
            create();
            break;
        case 'B':
            display();
            break;
        case 'C':
            insert();
            break;
        case 'D':
            delete ();
            break;
        case 'E':
            exit(0);
            break;
        }
    }
}
