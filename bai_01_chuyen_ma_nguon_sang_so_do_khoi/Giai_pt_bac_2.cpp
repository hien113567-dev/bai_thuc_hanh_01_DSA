#include<stdio.h>
#include<math.h>
void pt_bac1(float a, float b){
	if(a!=0){
		float x = -b/a;
		printf("PT co nghiem x = %.2f", x);
	}
	else{
		if(b==0)
			printf("PT vo so nghiem");
		else 
			printf("PT vo nghiem");
	}
}
int main(){
	float a, b, c;
	float delta, x1, x2;
	scanf("%f%f%f", &a, &b, &c);
	if(a==0)
		pt_bac1(b,c);
	else{
		delta = b*b - 4*a*c;
		if(delta < 0)
			printf("PT vo nghiem");
		else{
			if(delta == 0){
				x1 = -b/(2*a);
				printf("PT co nghiem: x = %.2f", x1);
			}
			else{
				x1 = (-b-sqrt(delta))/(2*a);
				x2 = (-b+sqrt(delta))/(2*a);
				printf("PT co 2 nghiem: x1 = %.2f, x2 = %.2f", x1, x2);
			}
		}
	}
}
