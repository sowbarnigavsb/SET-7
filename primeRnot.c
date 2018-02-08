#include <stdio.h>

int main(void) {
	int num,i,count=0;
            scanf("%d",&num);
             for(i=1;i<=num;i++)
             {
            if(num%i==0)
            count++;
             }
             if(count==2)
            printf("Prime number");
            else
	printf("Not a prime");
            return 0;
}
