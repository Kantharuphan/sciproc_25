#include <stdio.h>
#include <math.h>

double arctanh1(const double x, const double delta);
double arctanh2(const double x);

int main(){
	double delta,x;
	printf("Enter delta\n");
	scanf("%lf", &delta);

	int length=1000;
	double tan1[length];
	double tan2[length];

	x= -0.9;
	int j=0;
	while (x<=0.9 && j<length){
		tan1[j]=arctanh1(x, delta);
		tan2[j]=arctanh2(x);
		printf("Difference= %.10lf at %lf\n", fabs(tan1[j] - tan2[j]), x);
		j++;
		x=x+0.1;
}
return 0;
}

double arctanh1(const double x, const double delta){
	double arcTan =0;
	double elem,val;
	int n=0;

	do{
		val = 2 * n + 1;
		elem = pow(x,val)/val;
		arcTan += elem;
		n++;
	}while (fabs(elem) >=delta);

	return arcTan;
}
double arctanh2(const double x){
	return ((log(1+x) - log(1-x))/2);
}
