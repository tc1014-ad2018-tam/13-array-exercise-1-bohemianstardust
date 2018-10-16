// Write a program to read n number of integer values in an array and then:
// - Displays in a single line, separated by spaces, the numbers in the order they were entered.
// - Displays in another single line, separated by spaces, the numbers in reverse oder.
//
// Made by Jim Holguín on October 15th, 2018.

#include <stdio.h>

int main()

{
    int n,i;

    printf("Give me N.\n");
    scanf("%d", &n);

    int a[n];

    printf("\nEnter elements.\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf ("\nElements in the array:\n");
    for (int i=0; i<n; i++)
    {
        printf ("%i ", a[i]);
    }

    // Wow I'm such a comedian.
    printf ("\n\n:yarra eht ni stnemelE\n");
    for (int i=n; i>0 ; i--)
    {
        printf ("%i ", a[i-1]);
    }

}