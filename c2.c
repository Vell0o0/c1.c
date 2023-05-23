#include <stdio.h>

int main(void)
{
    char src[] = "programming language";
    char dst[30];
    int i;
    for (i = 0; src[i] != '\0'; i++)
    {
        dst[i] = src[i];
    }
    dst[i] = '\0';
    printf("%d, %s\n", i, dst);
}