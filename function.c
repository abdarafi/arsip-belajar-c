#include <stdio.h>

int square(int a, int b);


int main (){

int c;

c = square(19,2);

printf("%d\n", c);

return 0;
}

int square(int a, int b){

	return a + b;
}