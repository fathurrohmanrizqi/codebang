#include <iostream>

int main(){
	//int a, n;
	int a = 1, n;
	
	printf("Masukkan batas ulang: ");
	scanf ("%i", &n);
	
	do{
		printf("Perulangan do-while ke- %i\n", a);
		a++;
	} while (a<=n);
	
	//while (a<=n){
	//	printf("Perulangan while ke- %i\n", a);
	//	a++;
	//}
}
