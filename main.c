#include <stdio.h>
int main(void) {
 float A,X;
	printf("number : ",A);
	scanf("%f",&A);
	if(A>0){
		X=A*15;
		printf("SUM : %.2f ",X);
	}
	else{
		X=A*(-15);
		printf("SUM : %.2f ",X);
	}
  return 0;
}