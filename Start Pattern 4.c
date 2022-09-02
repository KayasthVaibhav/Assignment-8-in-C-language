
//(Q - 4) *****
//->       ****
//          ***
//           **
//            *

#include <stdio.h>
#include <conio.h>

int main()
{

    int i,j,n;
    //printf("Enter a number\n");
    //scanf("%d",&n);
    for( i = 1; i<=5; i++)
    {
        for( j=1; j<=5; j++)

        {
            if( j>=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
//Completed//

