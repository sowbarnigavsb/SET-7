#include <stdio.h>

int main(void) {
	int i,count=0,length=0;
	char s[100];
            scanf("%s",&s);
	for(i=0;s[i]!='\0';i++)
	{           length++;
		if(s[i]=='0'||s[i]=='1')
		count++;
	}
	if(count==length)
	printf("yes");
	else
	printf("no");
	return 0;
}
