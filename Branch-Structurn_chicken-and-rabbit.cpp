#include <stdio.h>
int main()
{
	int a,b,n,m;
	scanf("%d %d",&n,&m);	// chicken and rabbit in the same cage question
	b = (m-2*n)/2; 
	a = n-b;
	if(m%2==1||a<0||b<0)
		printf("No answer\n");
	else
		printf("%d %d\n",a,b);
	return 0;
}
