//A program that uses loops and flows control
#include<stdio.h>
int main(){
int x=4, y=6;
if(x==y){
    printf("The values are equal");}
    printf("This demonstrates a for-loop");
    for(x==10; x<20; x--){
        printf("The valuable is %d",x);}
        printf("This demonstrates a while loop");
        while(y<=20){
            y++;
            printf("The value is %d");}
/This demonstrates a do while statement/
do
    printf("The value is %d",x);
while(x<=20);
if(x!=y){
break;}
else if(y!=x){
    printf("The values are different");}
step1:;
    printf("This is the first step");
step2:;
    printf("This is the second step");
    printf("Enter a value to move to a step:");
    scanf("%d",&z);
if(z==1)
    goto 1;
else if(z==2)
    goto step2;
else
    printf("Enter either 1 or 2:");
return 0;
}


// A program that uses loops and flow control
#include <stdio.h>

int main() {
    int x = 4, y = 6, z;

    if (x == y) {
        printf("The values are equal\n");
    }

    printf("This demonstrates a for-loop\n");
    for (x = 10; x < 20; x++) {
        printf("The value is %d\n", x);
    }

    printf("This demonstrates a while loop\n");
    while (y <= 20) {
        printf("The value is %d\n", y);
        y++;
    }

    printf("This demonstrates a do-while statement\n");
    do {
        printf("The value is %d\n", x);
        x++;
    } while (x <= 20);

    if (x != y) {
        printf("The values are different\n");
    }

step1:
    printf("This is the first step\n");
step2:
    printf("This is the second step\n");
    printf("Enter a value to move to a step (1 or 2): ");
    scanf("%d", &z);

    if (z == 1)
        goto step1;
    else if (z == 2)
        goto step2;
    else
        printf("Enter either 1 or 2\n");

    return 0;
}
