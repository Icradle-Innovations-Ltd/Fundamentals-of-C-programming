// using operator
#include <stdio.h>
#include <math.h>

// define a constant
#define PI 3.14

int main()
{
	int r;
	printf("Enter the radius value: ");
	scanf("%d", &r);

	// using the ternary operator
	(r > 5) ? r++ : (r = r - 2);

	printf("The entered value after checking the condition is %d\n", r);
	return 0;
}