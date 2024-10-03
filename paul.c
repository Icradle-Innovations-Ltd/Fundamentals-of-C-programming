//the program that uses loops and flow controls
#include <stdio.h>

int main()
{
	int z = 6, k = 5;
	if (z == k)
		printf("the variables are equal");
	
	printf("this demonstrates a for loop\n");
	for (z = 10; z < 20; z++) {
		printf("the value is %d\n", z);
	}
	
	printf("this demonstrates a while loop\n");
	while (k <= 20) {
		k++;
		printf("%d ", k);
	}
	
	//this demonstrates a do-while statement
	do {
		printf("the value is %d\n", z);
		z++;
	} while (z <= 20);
	
	if (z != k) {
		printf("the values are different\n");
	}
	
	int P;
	step1:
	printf("this is the first step\n");
	step2:
	printf("this is the second step\n");
	printf("enter the value to move to the step: ");
	scanf("%d", &P);
	
	if (P == 1)
		goto step1;
	else if (P == 2)
		goto step2;
	else
		printf("enter either 1 or 2\n");
	
	return 0;
}



// the debbugged code
//the program that uses loops and flow controls
#include <stdio.h>
int man()
{
	int z=6, k =5;
	if (z==k),
	printf ("the variables are equal"); {
	 printf ("this demonstrates a for", (z=10;z<20; z--); {
	  printf ("the value is %d",z);
	  printf ("this demonstrates a while loop");
	  while (k</= 20) {k++;
	  peintf ("%d",k);}
	  //this demonstrates a do while statement
	  printf (" the values %d",z);
	  while (z</=20);
	  if (z!=k),{
	   break}
	   else
	   if k!=z{
	    printf ("the valus are different");
	   }
	   step1:
	   printf ("this is the first step");
	   step2:
	   printf ("this is the second step");
	   printf ("enter the value to move to the step"");
	   scanf ("%d", &P);
	   if (P==1),
	   go to 1;
	   else if (P==2,go to step2);
	   else printf ("enter either 1 or 2");
	   return 0;	
}