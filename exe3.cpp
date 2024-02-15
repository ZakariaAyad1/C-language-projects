#include <stdio.h>

int main (){
	
	float p;
	int a,x,n,i,xn;
	
	printf("Entrer la valeur de X: \n");
	scanf("%f", &x);
	
	printf("Entrer la valeur de degrée du polynome: \n");
	scanf("%d", &n);
	
	printf("entrer le coefficiant A0  \n");
	scanf("%f", &a);
	
	p=a;
	xn=x;
	for(i=1; i<n; i++){
		
		printf("entrer le coefficiant A%d \n", i);
		scanf("%f", &a);
		p = p + a*xn;
		xn = xn*x;

	}
	
	
	printf("le resultat de ce polynôme est: %f", p);
	
	
	
}
