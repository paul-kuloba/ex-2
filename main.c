#include <stdio.h>

int main() {
    float pounds, kilograms;
    float start, end, increment;

    // Accept starting, ending, and increment values from the user
    printf("Enter the starting pounds value: ");
    scanf("%f", &start);

    printf("Enter the ending pounds value: ");
    scanf("%f", &end);

    printf("Enter the increment value: ");
    scanf("%f", &increment);

    // Print the table header
    printf("\nPounds\t\tKilograms\n");

    // Convert and print pounds to kilograms in the given range with the specified increment
    for (pounds = start; pounds <= end; pounds += increment) {
        kilograms = pounds * 0.453592; // 1 pound = 0.453592 kilograms
        printf("%.2f\t\t%.2f\n", pounds, kilograms);
    }

    return 0;
}
