//(Q - 9)
//->      1234321
//         12321
//          121
//           1

#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j,k;

    for(i=1; i<=4; i++)
    {
        k=1;
        for(j=1; j<=7/2; j++)
        {
            if(j>=i && j<=8-i)
            {
                printf("%d",k);
                k++;
            }
            else
                printf(" ");
        }
        {

            if(j<=8-i)
            {

                printf("%d",k);
                k--;
            }

            //Repeat again first loop//
            for(j=1; j<=7/2; j++)
            {
                if(j>=i && j<=8-i)
                {
                    printf("%d",k);
                    k--;
                }
                // else
                //   printf(" ");
            }
            {

                if(j>=9-i)
                {

                    printf("%d",k);
                    k--;
                }
                printf("\n");
            }
        }
    }
}
//Completed//

