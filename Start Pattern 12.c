
//(Q - 12)
//->
//        ABCDEDCBA
//         ABCDCBA
//          ABA
//           A

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
            if(j>=i && j<=10-i)
            {
                printf("%c",k);
                k++;
            }
            else
                printf(" ");
        }

        {
            if(j<=10-i)
            {
                printf("%c",k);
                k--;
            }
            //Repeat again 2nd loop//

            for(j=1; j<=9/2; j++)
        {
               if(j>=i && j<=10-i)
            {
                printf("%c",k);
                k--;
            }
            //else
              //  printf(" ");
        }

        {

                if(j>=11-i)
            {
                printf("%c",k);
                k--;
            }
                printf("\n");

            }
        }

    }

}
//unCompleted//
