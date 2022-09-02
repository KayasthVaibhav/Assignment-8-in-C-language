//(Q - 6)    *********
//->          *******
//             *****
//              ***
//               *

#include <stdio.h>
#include <conio.h>

int main()
{

    int i,j,a,n;
   // printf("Enter a number  I of N : \n");
    //scanf("%d",&n);

   // printf("Enter a number J of A : \n");
    //scanf("%d",&a);
    for( i = 1; i<=5; i++)
    {
        for( j=1; j<=9; j++)

        {
            if( (j>=i) && (j<=10-i))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
//Completed//



