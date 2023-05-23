/* NULL = \0 
   '' => 문자, "" => 문자열
   문자열: NULL 필요x
   나머지 자리: \0
   char src[]= "programming language";
   char dst[50];
   dsr = src ==> X
   char *p = "helloWorld"; 읽기만 가능, 수정불가
   
*/
#include <stdio.h>

int main(void)
{
    char str[4];
    int i = 0;

    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
    str[3] = '\0';

    while (str[i] != '\0')
        printf("%c", str[i++]);


}