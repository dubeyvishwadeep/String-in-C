#include<stdio.h>
int main()
{
int i;
int *p;
i=5;
p=&i;
printf("i=%d,p=%p,*p=%d\n",i,p,*p);
i=6;
printf("i=%d,p=%p,*p=%d\n",i,p,*p);
return 0;
}
