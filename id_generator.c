# include <stdio.h>
int generateID()
{
    static int id = 0;
    id++;
    return id;
}
int main()
{
    printf("Generated ID: %d\n", generateID());
    printf("Generated ID: %d\n", generateID());
    printf("Generated ID: %d\n", generateID());
    return 0;
}