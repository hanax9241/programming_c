
#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {
	int start,answer;
	start=0;
	double a,b,c;
	double x1,x2,d;
	while (start==0) {
		a = printf("vvedite a:\n");
		scanf("%lf",&a);
		b = printf("vvedite b:\n");
		scanf("%lf",&b);
		c = printf("vvedite c:\n");
		scanf("%lf",&c);
		d = b * b - 4 * a * c;
		if (d<0) printf("net korney\n");
		if (d>0) {
			x1= -b + sqrt(d)/(2*a);
			x2= -b - sqrt(d)/(2*a);
	
			printf("x1 = %lf\n",x1);
			printf("x2 = %lf\n",x2);
			printf("d = %lf\n",d);
		}
		if (d==0) {
			x1= -b + sqrt(d)/(2*a);
			printf("only one root x = %lf\n",x1);		
		}
		printf("hotite zapustit eshe raz? (1-da,2-net)\n");
		scanf("%d",&answer);
		if (answer==1) start=0;
		if (answer==2) start=1;
		
		
		
	}
	return 0;
}
