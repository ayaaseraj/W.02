#include <stdio.h>
int main () {
    int arr[10];
    int sum =0;
    for (int i=0; i<10 ; i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("sum = %d\n",sum);
    printf("average = %.2f\n",sum/10.00);
    return 0;
}

