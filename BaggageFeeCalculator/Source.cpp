// Baggage Fee Calculator
#include <stdio.h>

// static totalfees 
static int totalFees = 0;
// Step no 1 :  Function Prototype 
void baggage(int weight);


int main() {
	// Function invoking og Calling

	int weight;
	printf("Enter weight:(Enter -1 to end the program:");
	scanf_s("%d", &weight);
	while (weight != -1)
	{
		baggage(weight);
		printf("Enter weight:(Enter -1 to end the program:");
		scanf_s("%d", &weight);
	}
	
	return 0;
}

// Step no 2: Function declaration , Header
void baggage(int weight) {	
	
	if(weight <= 23)
	{
		// there is no fees on weight equals to or less than 23
		totalFees = 0;
	}
	else
	{
		totalFees = (weight - 23) * 12;
	}

	printf("Total Fee is :%d\n", totalFees);

}
