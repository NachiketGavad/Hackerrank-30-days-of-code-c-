#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    //testing
    
    // Declare second integer, double, and String variables.
    int n1;
    double n2;
    char n3[100];
    
    // Read and save an integer, double, and String to your variables.
    // printf("Enter integer ");
    scanf("%d", &n1);
    // printf("Enter double ");
    scanf("%lf", &n2);
    // printf("Enter string ");
    scanf("%*[\n] %[^\n]", &n3);
    // Print the sum of both integer variables on a new line.
    printf("%d", i+n1);

    // Print the sum of the double variables on a new line.
    printf("\n%0.lf", d+n2);

    // Concatenate and print the String variables on a new line
    printf("\n%s%s",s,n3);
    // The 's' variable above should be printed first.
    return 0;
}