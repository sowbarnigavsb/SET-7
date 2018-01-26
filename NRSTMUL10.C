#include <stdio.h>

int main(void) {
	int n,r;
	scanf("%d",&n);
	r=n/10;
	if(n%10!=0)
	r=r+1;
	r*=10;
	printf("%d",r);
	// your code goes here
	return 0;
}
