#include <stdio.h>
#include <string.h>//문자열 관련 처리 파일
/*
int x;

    while ((x = getchar()) != EOF)
        putchar(x);
    printf("EOF = %d\n", x);
*/
/*
char name[20];
    char addr[20];

    printf("이름: ");
    fgets(name, 20, stdin);
    printf("주소: ");
    fgets(addr, 20, stdin);

    printf("이름: %s주소: %s\n", name, addr);
*/
int main(void)
{
    
    /*strcpy(str, "i am won");//문자열 카피
    printf("%s\n",str);
    strcat(str, " your money");//문자열 추가
    printf("%s\n",str);*/
    
    /*
    char str[100];
    char op[] = " ,\n\t\b";
    char *pt;
    int i = 0;
    fgets(str, 100, stdin);
    printf("%s\n", str);
    pt = strtok(str, op);
    while (pt != NULL)
    {
        printf("[%d] %s\n", i++, pt);
        pt = strtok(NULL, op);
    }
    */
    char a[3][6] = {"a", "bb", "ccc"};
    char *p[3] = {"a", "bb", "ccc"};

    for (int i = 0; i < 3; i++)
    {
        printf("%p : %s\n", a[i], a[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%p : %s\n", p[i], p[i]);
    }
}