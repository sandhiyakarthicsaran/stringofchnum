#include<stdio.h>
int main()
{
int i;
char s[60];
printf("Enter the string:\n");
scanf("%s",s);
if(s[i]>='a' && s[i]<='z || s[i]>='1' && s[i]<='9')
printf("YES\n");
else
printf("NO\n");
return 0;
}
