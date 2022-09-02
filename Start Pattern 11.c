
//(Q - 11)
//->          A
//           ABA
//         ABCDCBA
//        ABCDEDCBA

#include <stdio.h>
#include <conio.h>

int main()
{


    int i,j;

    for(i=1; i<=5; i++)
    {
        int k='A';
        for(j=1; j<=9/2; j++)
        {
            if(j>=6-i && j<=4+i)
            {
                printf("%c",k);
                k++;
            }
            else
                printf(" ");
        }

        {
            if(j>=6-i)
            {
                printf("%c",k);
                k--;
            }
            //Repeat again 2nd loop//

            for(j=1; j<=9/2; j++)
        {
            if(j>=6-i && j<=4+i)
            {
                printf("%c",k);
                k--;
            }
            //else
              //  printf(" ");
        }

        {
            if(j<=6-2)
            {
                printf("%c",k);
                k--;
            }
                printf("\n");

            }
        }

    }

}
//Completed//
