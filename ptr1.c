#include<stdio.h>
#include<stdlib.h>

int main(int argv,char **argc)
{
	int var1, var2 ,var3;
	int *ptr_var1,*ptr_var2,*ptr_var3,*temp1,*temp2;

	printf("请输入三个值：\n");
	scanf("%d",&var1);
	scanf("%d",&var2);
	scanf("%d",&var3);
	printf("var1 = %d,address = %d\n",var1,&var1);
	printf("var2 = %d,address = %d\n",var2,&var2);
	printf("var3 = %d,address = %d\n",var3,&var3);
	ptr_var1 = &var1;
	ptr_var2 = &var2;
	ptr_var3 = &var3;
	temp1 = ptr_var2;
	ptr_var2 = ptr_var1;
	temp2 = ptr_var3;
	ptr_var3 = temp1;
	ptr_var1 = temp2;
	printf("var1 = %d\n",*ptr_var1);
	printf("var2 = %d\n",*ptr_var2);
	printf("var3 = %d\n",*ptr_var3);
}
