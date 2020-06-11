#include <stdio.h>

int main (){

FILE *fp;
char buf[50];

fp = fopen("flag.txt","r");

if(fp == NULL){
	printf("Cant read the file\n");
}

fgets(buf, 50, fp);

printf("%s\n", buf);

fclose(fp);

return 0;
}