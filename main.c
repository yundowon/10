#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int grade[5];
	int sum = 0;
	int *ptr;
	
	for(i=0; i<5; i++)
	{
		ptr = grade+i;
		printf("input Value (%i) : ", i);
		scanf("%d", ptr);
	}
	
	for(i=0; i<5; i++)
	{
		ptr = &grade[i];
		sum += *ptr;
		printf("grade[%d] = %d\n", i, *ptr);
	}
	
	printf("\n average : %i\n", sum/5);
	
	return 0;
}
