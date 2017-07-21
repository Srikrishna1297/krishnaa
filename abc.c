#include<stdio.h>
int main()
{
    char r;
    scanf("%c",&r);
    if(r=='a'||r=='e'||r=='i'||r=='o'||r=='u'||r=='A'||r=='E'||r=='I'||r=='O'||r=='U')
        {
        printf("the num is vowel",r);
    }
    else
        {
            printf("consonant",r);
        }
    return 0;
}
