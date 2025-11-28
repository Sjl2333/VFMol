#include<stdio.h> 
int max(int x,int y)
{
	int m;
	if(x>y)
	m=x;
else 
    m=y;
	return m;
}
int main()
{
	int x,y,z;
	printf("input x=?,y=?,z=?\n");
	scanf("%d%d%d",&x,&y,&z);
	x=max(max(x,y),z);
	printf("max=%5d\n",x);
	return 0;
}

