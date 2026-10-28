# include <stdio.h>
extern int number;
int number = 10;
int main()
{
    printf("Number before modificaton = %d\n", number);
    number = 50;
    printf("Number after modificaton = %d\n", number);
    return 0;
}