#include <stdio.h>
#include <math.h>

float degtorad(float degang);
float traprule(int N, float TanArr[N+1]);

int main(void){

	int N = 12, i;
	float TanArr[N+1], deg, rad, area;
	
	//f(xi) at x_i i=0, .... 12
	for (i=0; i<=N; i++){
		deg = i* 5.0;
		rad = degtorad(deg);
		TanArr[i] = tan(rad);
		printf("TanArr[%d]=%f\n", i, TanArr[i]);
	}

	area = traprule(N, TanArr);

	//Approximated result
	printf("\nTrapezoidal result: %f\n", area);
	
	//Actual result
	printf("\n Actual result: %f\n", log(2.0));

	return 0;
}

float degtorad(float degang){
	return((M_PI * degang)/180.0);

}

float traprule (int N, float TanArr[N+1]){
	float area;
	int i;

	area = TanArr[0] + TanArr[N];
	for(i=1; i<N; i++){
		area = area + 2.0*TanArr[i];
	}
	float mult_rad=degtorad((60.0-0.0)/(2*N));
	area = mult_rad * area;
	return area;	
}
