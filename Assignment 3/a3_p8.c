#include <stdio.h>
float compute_sum(float values[], int count) {
    int i;
    float sum = 0.0f;

    for (i = 0; i < count; i++) {
        sum += values[i];
    }
    return sum;
}

float compute_average(float values[], int count) {
    if (count == 0) {
        return 0.0f;
    }
    return compute_sum(values, count) / count;
}

int main() {
    float values[10];
    float x;
    int count = 0;

    while (count < 10) {
        printf("Enter a float (-99.0 to stop):\n");
        scanf("%f", &x);
        if (x == -99.0f) {
            break;
        }
        values[count] = x;
        count++;
    }

    printf("Sum: %f\n", compute_sum(values, count));
    printf("Average: %f\n", compute_average(values, count));

    return 0;
}
