

#include <stdio.h>
int main() {
    int x, z;
    float num[100], sum = 0.0, avg;

    printf("Enter the numbers of the list: ");
    scanf("%d", &x);

    for (z = 0; z < x; ++z) {
        printf("%d. Enter any number: ",z + 1);
        scanf("%f", &num[z]);
        sum += num[z];
    }

    avg = sum / x;
    printf("The average is: %.2f", avg);
    return 0;
}