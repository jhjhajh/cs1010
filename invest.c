
#include <stdio.h>
#include <math.h>

int main(void) {
	int principal, rate, numYears;
    float amount; 

	printf("Enter principal amount: ");
    scanf("%d", &principal);

	printf("Enter interest rate   : ");
    scanf("%d", &rate);

	printf("Enter number of years : ");
    scanf("%d", &numYears);

    //amount calculated by finding product of principle amount and compound interest
    amount = principal * (1 - pow(rate/100.00, numYears+1))/(1 - rate/100.00);

    printf("Amount = $%.2f\n", amount);
	
    return 0;
}