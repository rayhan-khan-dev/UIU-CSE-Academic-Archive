#include <stdio.h>
void concat(char result[], const char str1[], const char str2[]);
int main(void)
{
    const char s1[] = "Test ";
    const char s2[] = "works.";
    char s3[20];
    concat(s3, s1, s2);
    printf("%s\n", s3);
    return 0;
}