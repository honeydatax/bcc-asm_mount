#include <stdio.h>
 
int winpower(a)
int a;
{
	return a << 4;
}
int main(){
	int i=0;
	for(i=0;i<10;i++){
		printf("%d<<%d\n",i,winpower(i));
	}
	return 0;
}