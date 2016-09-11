#include<stdio.h>
void main()
{
int i,j,k;
int s;
scan("%d%d%d",&i,&j,&k);
s=((i>j?(i>k)?i:k):((j>k)?j:k));
printf("%d",s);

}
