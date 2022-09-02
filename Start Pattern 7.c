//(Q - 7) **********
//->      ****  ****
//        ***    ***
//        **      **
//        *        *
#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j,n,a,n1,a1;
        // printf("Enter a number J of n : \n");
      //scanf("%d",&n);

      //printf("Enter a number J of a : \n");
      //scanf("%d",&a);

    //printf("Enter a number  I of n1 : \n");
    //scanf("%d",&n1);

    //printf("Enter a number J of a1 : \n");
    //scanf("%d",&a1);

   //  printf("\n");
    for( i = 1; i<=5; i++)
    {
        for( j=1; j<=5; j++)

        {
            if( j<=5+1-i)
                printf("*");
            else
                printf(" ");
        }


        for( j=6; j<=10; j++)

        {
            if( j>=5+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
//Completed//
//it's Program will be work also values from the User's ...//
