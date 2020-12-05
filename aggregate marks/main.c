//program to calculate aggregate marks obtained by a student in 5 subjects (the maximum marks can be only 100.)
//author Majid Mujahid Hussain
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sub1,sub2,sub3,sub4,sub5,aggregate;
    printf("Hello world!\n");
    printf("Please enter the marks obtained by the student in 5 subjects. \n");
    scanf(" %f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    // calculating aggregate marks.
    aggregate = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;

    printf("the aggregate marks obtained by the student in 5 subjects %f \t %f \t  %f \t %f \t %f \t is %f ", sub1, sub2, sub3 ,sub4, sub5, aggregate );
    return 0;
}
