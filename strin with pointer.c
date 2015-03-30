#include<stdio.h>
int main()
{
char name[]="vijyant";
char *ptr;
ptr=name;/* store base address of string*/
while(*ptr!='\0')
{
printf("%c",*ptr);
ptr++;
}
printf("\n");
return 0;
}
