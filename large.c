#include <stdio.h>

int main(void) {
	// your code goes here

int i,j,k;
scanf("%d%d%d",&i,&j,&k);
if(i>j&&i>k)
printf("%d",i);
else
{
if(j>i&&j>k)
printf("%d",j);
else
printf("%d",k);
}

return 0;
	
