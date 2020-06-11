# include <stdio.h>

int ls1();
 
int main()
{
// int Total=0,i;
// for(i=0;i<100;i++)
// {
// Total+=i; // This is same as Total = Toatal+i
// }
// printf("Total = %d", Total);
int a = 20, b;

b = ls1(a);

printf("result is %d", b);

return 0;
}

int ls1(v){
	return v << 1;
}

