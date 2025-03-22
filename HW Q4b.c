#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void computehomevalue(void) 
{
	
	float popularity,homesize,Homevalue;
	
	printf("Enter popularity:\n");
	scanf("%f",&popularity);
	
	printf("Enter homesize:\n");
	scanf("%f",&homesize);
	
	Homevalue = (pow(popularity,3)+pow(homesize,2))*1000;
	
	printf("Estimated value of your home: %.2f TL \n",Homevalue);
}
	int main()
{
	computehomevalue();	
	return 0;
}
