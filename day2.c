#include <stdio.h>
#include <math.h>
int main()
{
    double meal_cost;
    int tip_percent, tax_percent, tip1, tax1;
    double tip, tax, total_cost;

    //meal cost
    scanf("%lf", &meal_cost);

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
    total_cost = meal_cost + tip + tax;
    printf("%d",(int)round(total_cost));

    return 0;
}