//	Q.1 Write a Program to perform the merge operation of two 1D arrays & store it in another array. 
//	    Keep in mind that both array sizes can be different.

#include<stdio.h>

main() 
{
    int n,n1,i;

    printf("Enter array size: ");
    scanf("%d", &n);
		
    int a[n], b[n1], c[n];

    printf("\nEnter array A's elements:\n");
    for(i=0; i<n; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
        printf("Enter array size: ");
  	    scanf("%d", &n1);	

    printf("\nEnter array B's elements:\n");
    for(i=0; i<n1; i++) 
	{
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }
        
    printf("\nOutput:\n");
    printf("Array C is: ");
    for (i=0; i<n; i++) 
	{
        printf("%d, %d, ", a[i],b[i]);
    }
    printf("\n");

}