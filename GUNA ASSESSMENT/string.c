#include <stdio.h>
int main()
{
    char s1[20] = "copy the string", s2[20];
    int i;
    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    printf("%s", s2);
    return 0;
}


#include <stdio.h>
#include<string.h>
void main()
{
    int len1,len2,i;
    char s1[10],s2[10];
    printf("enter the first");
    gets(s1);
    printf("enter the second");
    gets(s2);
    
    
len1=strlen(s1);
len2=strlen(s2);
for(i=o;i<=len2;i++)
{
    s1[len1+i]=s2[i];
}
printf("after concatenation%s",s1);
}
