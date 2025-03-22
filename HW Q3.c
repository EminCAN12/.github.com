#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {
	int popularity ;
	int homesize ;
	int Homevalue;
	
	printf("Enter popularity:\n");
	scanf("%d",&popularity);
	
	printf("Enter homesize:\n");
	scanf("%d",&homesize);
	
	Homevalue = (pow(popularity,3)+pow(homesize,2))*1000;
	
	printf("Estimated value of your home: %d TL \n",Homevalue);
	
	return 0;
}
