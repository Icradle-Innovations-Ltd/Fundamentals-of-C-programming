//using operators
#include<stdio.h>
#include<math.h>

//Define a constant
#define PI 3.14

int main(){
 int x;

printf("\n Enter the Radius value:");
scanf("%d",&x);

//Using the ternary operator (works similar to an if statement)
(x>5) ? x++:(x=x-2);
printf("The entered value after checking the condition is:%d\n",x);

//Typecasting the integer to a float since we expect the area to be a float
float radius=(float)x;

/*Using the power (pow()) function from math.h header file to represent the formula PI *(r^2)
Note that pow(a, b) means a to the power b
Note the precedence of operators as well
*/
float area=PI*(pow(radius,2));
printf("The area is %f\n",area);

return 0;

}
