#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float computehomevalue(float popularity,float homesize)
{
	return (pow(popularity,3)+pow(homesize,2))*1000;
}

int main() {
	float popularity ;
	float homesize ;
	
	printf("Enter popularity:\n");
	scanf("%f",&popularity);
	
	printf("Enter homesize:\n");
	scanf("%f",&homesize);
	
	float Homevalue = computehomevalue (popularity,homesize);
	
	printf("Estimated value of your home: %.2f TL \n",Homevalue);
	
	return 0;
}
