#include <stdio.h>
#include <string.h>
int hasil = 0;

int sum (int, int);


// array[] = {'a','b','c'}

int main(){
	// int a, b;
	// puts("Masukan angka..");
	// scanf("%d", &b);

	// for (a = 1; a <= b; a++)
	// 	puts("Helloooo");
	// return 0;
	// while (1)
	// 	puts("Haloo");

	char z[10] = "haai", baru;

	// baru = strcpy(z, "heei");
	baru = "satt";

	hasil = sum(1, 1);
	printf("%s %d", z, hasil);

	return 0;
}

int sum(int a, int b){
	return a + b;
}