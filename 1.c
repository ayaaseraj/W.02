#include <stdio.h>
int main () {
    int h,sal;
    printf("Enter the number of working hours: ");
    scanf("%d",&h);
    sal=50*h;
    if (h<40)
        printf("salary = %.2f",sal*(0.9));
    else
        printf("salary = %d",sal);
    return 0;
}
