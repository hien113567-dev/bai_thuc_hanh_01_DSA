#include<stdio.h>
#include<math.h>
int ktra_ngto(int N){
	if(N<2) return 0;
	else{
		for(int i=2; i<=sqrt(N); i++){
			if(N%i==0) return 0;
		}
		return 1;
	}
}
int main(){
	int N;
	scanf("%d", &N);
	if(ktra_ngto(N))
		printf("N la so nguyen to");
	else printf("N khong la so nguyen to");
}
