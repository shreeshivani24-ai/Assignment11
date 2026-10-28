# include <stdio.h>
extern int a;
int a = 50;
int main()
{
    printf("Number declare in other file = %d\n", a);
    return 0;

}
