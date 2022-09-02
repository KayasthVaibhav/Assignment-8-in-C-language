//(Q - 8)
//->         1
//          121
//         12321
//        1234321

#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j,k,b;

    for(i=1; i<=4; i++)
    {
        k=1;
        for(j=1; j<=7/2; j++)
        {
            if(j>=5-i && j<=3+i)
            {
                printf("%d",k);
                k++;
            }
            else
                printf(" ");
        }

        {
            if(j>=3-i)
            {
                printf("%d",k);
                k--;
            }
            //Repeat again 2nd loop//
            for(j=1; j<=7/2; j++)
            {
                if(j>=5-i && j<=3+i)
                {
                    printf("%d",k);
                    k--;
                }
            }

            {
                if(j<=3-i)
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
//it's Program will be work also values from the User's ...//

