#include<stdio.h>
void main()
{
	int N,r,R,i;
	scanf("%d%d",&N,&r);
	for(i=1;i<=N;i++)
	{
	scanf("%d",&R);
	if(R>=r)
		{
	printf("Good boi\n");
	fflush(stdout);
		}
	else
		{
	printf("Bad boi\n");
	fflush(stdout);
		}
	}
}
