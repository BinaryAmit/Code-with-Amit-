#include<stdio.h>



//No Argument and No Return Value

void Star_pattern()
{ 
	int a; 
	printf("Enter how many stars(*) you want :"); /* In this both declaration and definition of function are done together.*/ 
	scanf("%d", &a ); 
	for (int i = 0; i<a; i++) 
	{
		printf("*"); 
	} 
}




int main(){
	Star_pattern();

	return 0;
}
 
 