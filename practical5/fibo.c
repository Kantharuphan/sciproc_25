#include <stdio.h>
#include <stdlib.h>

void fibonacci (int *a, int *b);		

int main ()
{
int n, i;
int f1=1, f0=0;

printf("Enter a positive integer\n");
scanf("%d",&n);

if (n<1){
	printf("The number is not positive\n");
	exit(1);}

printf("Fibonacci sequence is: \n");
printf("%d %d ", f0, f1);

for (i=2; i<=n; i++){
	fibonacci(&f1, &f0);
	printf("%d ", f1);
	if ((i+1)%10 ==0)
		printf("\n");
}
	return 0;
}

void fibonacci (int *a, int *b){
	int next;
	next = *a+*b;

	*b = *a;
	*a = next;
}
