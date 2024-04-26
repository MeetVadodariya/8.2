#include<stdio.h>

main() 
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int r[size];
    printf("Enter array elements:\n");
    for (int i=0; i<size; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &r[i]);
    }

    printf("The squares are: ");
    for (int i=0; i<size; i++) 
	{
        printf("%d", r[i] * r[i]);
        if (i<size - 1)
            printf(", ");
    }
    printf("\n");
}
