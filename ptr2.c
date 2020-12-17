#include<stdio.h>
#include<stdlib.h>

void swap(int *p1,int *p2);

void swap(int *p1,int *p2)
{
	int p;
	p = *p1;
	*p1 = *p2;
	*p2 = p;
}
int main(int argv,char **argc)
{
	int a,b;
	int *p1,*p2;
	printf("请输入两个数：\n");
	scanf("%d,%d",&a,&b);
	p1 = &a;
	p2 = &b;
	if(a < b)
	{
		swap(p1,p2);
	}
	printf("%d,%d\n",*p1,*p2);
}
