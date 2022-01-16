#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float mark;
    printf("Please Enter Obtained Mark : ");
    scanf("%f",&mark);
    if((mark>=80)&&(mark<=100))
    {
        printf("Your GPA is A+");
    }
    else if((mark>=70)&&(mark<=79))
    {
        printf("Your GPA is A");
    }
    else if((mark>=60)&&(mark<=69))
    {
        printf("Your GPA is A-");
    }
    else if((mark>=50)&&(mark<=59))
    {
        printf("Your GPA is B");
    }
    else if((mark>=40)&&(mark<=49))
    {
        printf("Your GPA is C");
    }
    else if((mark>=33)&&(mark<=39))
    {
        printf("Your GPA is D");
    }
    else if((mark<33)&&(mark>=0))
    {
        printf("Your GPA is F");
    }
    else
    {
        printf("Input Error");
    }

    getch();
    return 0;
}
