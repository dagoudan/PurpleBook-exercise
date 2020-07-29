#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);		//three-digit inversion
	printf("%d%d%d\n",n%10,n/10%10,n/100);      // the first inversion
	int m = (n%10)*100+(n/10%10)*10+n/100;
	printf("%03d\n",m);     //the second inversion
	return 0;
 } 
