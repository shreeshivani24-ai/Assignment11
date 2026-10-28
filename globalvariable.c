# include <stdio.h>
int a = 500;

int main()
{
    printf("Global number = %d\n", a);
    {
        int a = 200;
        printf("Block number = %d\n", a);
    }

    printf("Global number = %d\n", a);
    return 0;

}