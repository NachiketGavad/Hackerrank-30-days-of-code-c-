#include <stdio.h>
#include <math.h>
int main()
{
    float meal_cost;
    int tip_percent, tax_percent, tip1, tax1;
    float tip, tax, total_cost;

    //meal cost
    scanf("%f", &meal_cost);

    //tip_percent
    scanf("%d", &tip_percent);

    //tax_percent
    scanf("%d", &tax_percent);

    //tip
    tip = (meal_cost * tip_percent) / 100;
    // tip1 = (int)tip;

    //tax
    tax = (tax_percent * tip_percent) / 100;
    // tax1 = (int)tax;


    //total cost
    printf("%d",(int)round(meal_cost + tip + tax));

    return 0;
}