#include <stdio.h>
#include <math.h>

int main(){
    int side;
    printf("Enter the side\n");
    scanf("%d", &side);
    printf("The area of the square is %g", pow(side,2));
    return 0;
}