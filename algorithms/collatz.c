#include <stdio.h>

void main() {

	int n;
	printf("enter integer > 0 \n>>> ");
	scanf("%d",&n);
	int steps = 0;

	if(n==1) {
		printf("n: 1, step: 1 \n");
	}

	while (n!=1) {

		if(n<0) {
			printf("num less than 0 \n");
			break;
		}

		if(n%2==0) n=n/2;
		else n=(3*n)+1;

		steps += 1;

		printf("n: %d, step: %d\n",n,steps);

	}

}
