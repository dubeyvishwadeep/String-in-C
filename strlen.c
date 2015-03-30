#include<stdio.h>
#include<string.h>
int main()
{
char arr[]="ravisahnkar ji";
int len1,len2;

len1=strlen(arr);
len2=strlen(" australia again win the icc world cup");
printf("string=%s lenth=%d\n",arr,len1);
printf("string=%s length=%d\n"," australia again win the icc world cup",len2);
return 0;
}
