#include <stdio.h>



union aa
{
    int n;
    double x;
};
union bb
{
    int m;
    unsigned char b[20]; 
};


int main(void)
{
    enum colors {RED=11, ORANGE, YELLOW};//세가지의 변수, 정수를 입력안해도 됨, 특정 정수를 입력 가능

    enum colors cf;
    scanf("%d", &cf);

    switch (cf) 
    {
        case RED:
            printf("%d: RED\n", cf); break;
        case ORANGE:
            printf("%d: ORANGE\n", cf); break;
        case YELLOW:
            printf("%d: YELLOW\n", cf); break;
        default:
            break;
    }
}