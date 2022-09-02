//(Q - 5)    *
//->        ***
//         *****
//        *******
//       *********

#include <stdio.h>
#include <conio.h>

int main()
{

    int i,j,a,n;
    printf("Enter a number  I of N : \n");
    scanf("%d",&n);

    printf("Enter a number J of A : \n");
    scanf("%d",&a);
    for( i = 1; i<=n; i++)
    {
        for( j=1; j<=a; j++)

        {
            if( (j>=n+1-i) && (j<=n-1+i))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
//Completed//


