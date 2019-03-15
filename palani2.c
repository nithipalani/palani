#include<stdio.h>
int main()
{
    char v[50];
    int i;
    printf("enter the character");
    scanf("%c",&v);
    for(i=0;v[i]!='\0';i++)
    if(v[i]=='a'||v[i]=='e'||v[i]=='i'||v[i]=='o'||v[i]=='u')
    {
    printf("vowel");
    }
    else
    {
    printf("other is consonant");
}
return 0;
}
