
//(Q -18)
//->
//         *****     *****
//        *******   *******
//       ********* *********
//->     ******MySirG*******
//        *****************
//         ***************
//          *************
//           ***********
//            *********
//             *******
//              *****
//               ***
//                *


#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j,k="MySirG";

    for(i=1; i<=3 ; i++)
    {
        for(j=1; j<=19; j++)
        {
            if(j>=4-i && j<=6+i )
                printf("*");
            else if(j>=14-i && j<=16+i)
                printf("*");
            else
                printf(" ");


        }
        printf("\n");
    }

//////Second loop ⬇️⬇️⬇️/////

    for( i = 1; i<=1; i++)
    {
        for( j=1; j<=19; j++)
        {
            if(j>=i && j<=7-i )
                printf("*");

            else if(j>=12+i && j<=18+i)
            {
                printf("*");

                if(j>=6+i && j<=12+i)

                    printf("%s",k);
            }
        }
        printf("\n");

/////Third loop ⬇️⬇️⬇️////////////

        for( i = 1; i<=10; i++)
        {
            for( j=1; j<=19; j++)

            {
                if( (j>=i) && (j<=20-i))
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
}
//Completed//
