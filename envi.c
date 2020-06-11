#include <stdio.h>
#include <stdlib.h>

int main(){
	setenv("DIR", "/bin/us", 50);
	printf("your directory %s\n", getenv("DIR"));
return 0;
}