#include <stdio.h>

int main(void) {
	int num1,num2,diff;
            scanf("%d%d",&num1,&num2);
            diff=num1-num2;
            if(diff%2==0)
            printf("Even");
            else
	printf("Odd");
            return 0;
}
