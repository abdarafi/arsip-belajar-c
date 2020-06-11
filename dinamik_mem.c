#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
char *mem_allocation;
mem_allocation = malloc(20 *sizeof(char));
if (mem_allocation == NULL){
	printf("cant fill the memory");
}
else {
	strcpy( mem_allocation, "HALO GAN");
}
printf("Your string is ... %s ", mem_allocation );
mem_allocation=realloc(mem_allocation, 100*sizeof(char));
if (mem_allocation == NULL){
	printf("coulnt extend memory");
}
else{
	strcpy(mem_allocation, "NAMBAH OMMM");
}
printf("bertambah string ini gan %s", mem_allocation);
free(mem_allocation);
}
