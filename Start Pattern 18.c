//(Q -18)    *
//->        ***
//         *****
//        *******
//       *********
//->      *******
//         *****
//          ***
//           *

#include <stdio.h>
#include <conio.h>

int main()
{

    int i,j,k=0;

    for( i = 1; i<=9; i++)
    {
        if(i<=5)
            k++;
        else
            k--;
        for(j=1; j<=9; j++)
        {
            if(j>=6-k &&j<=4+k)
                printf("*");
            else
                printf(" ");

        }

        printf("\n");
    }
}
//Completed//
