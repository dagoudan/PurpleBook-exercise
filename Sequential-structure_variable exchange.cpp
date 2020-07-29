#include <stdio.h>
int main()
{
	int a,b,t;
	scanf("%d %d",&a,&b);//variable exchange 
	t = a;
	a = b;				//the first exchange
	b = t;
	printf("%d %d\n",a,b);
	scanf("%d %d",&a,&b);
	a = a+b;
	b = a-b;			//the second exchange
	a = a-b;
	printf("%d %d\n",a,b);
	scanf("%d %d",&a,&b);
	printf("%d %d\n",b,a);	//the third exchange 
	return 0;
}
