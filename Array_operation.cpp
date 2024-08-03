#include <stdio.h>
#include <conio.h>
void Traverse(); // function declaration
void Insert();   //   function declaration
void Delete();
void Delete_pos();
// global variable declaration
int i, k;
int Arr[10];
int n = 4;

void Traverse() // function definition
{
    printf("\n The elements of Arr is\n");
    for (i = 0; i <= n; i++)
    {
        printf("\t%d", Arr[i]);
    }
    printf("\n");
}

void Insert() // function definition
{
    printf("\n Insert values at Arr:\n\t");
    for (i = 0; i <= n; i++)
    {
        scanf("%d", &Arr[i]);
    }
}

int main()
{
    Insert();   // function call
    Traverse(); // function call
    Delete_pos();
    Delete();
    getch();
    return (0);
}

void Delete()
{
    k = n - 1;
    printf("\n After deleting an element from the array end...\n the Present Array is:\n");
    for (i = 0; i <= k; i++)
        printf("\n Element of Arr[%d]=%d", i, Arr[i]);
}

void Delete_pos()
{
    int pos;
    printf("\n Enter the array position/ index to delete:");
    scanf("%d", &pos);
    int j;
    for (j = pos; j < n; j++)
    {
        printf("\n After replace the value at index[%d] by value of index[%d]...", j, j + 1);
        Arr[j] = Arr[j + 1];
        Traverse();
        getch();
    }
    k = n - 1;
    printf("\n After deleting an element from the array location[%d]...\n the Present Array is:\n", pos);
    for (j = 0; j <= k; j++)
        printf("\t%d", Arr[j]);
}
