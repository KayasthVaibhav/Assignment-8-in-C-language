//(Q - 3) *****
//->      ****
//        ***
//        **
//        *

#include <stdio.h>
#include <conio.h>

int main()
{

    int i,j,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for( i = 1; i<=n; i++)
    {
        for( j=1; j<=n; j++)

        {
            if( j<= n+1-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
//Completed//

