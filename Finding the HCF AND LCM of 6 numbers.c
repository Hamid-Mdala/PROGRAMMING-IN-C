#include <stdio.h>
// Function to calculate HCF of two numbers
int findHCF(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findHCF(b, a % b);
}

// Function to calculate LCM of two numbers
int findLCM(int a, int b) {
    return (a * b) / findHCF(a, b);
}

// Function to calculate HCF of multiple numbers
int calculateHCF(int arr[], int n) {
    int hcf = arr[0];
    for (int i = 1; i < n; i++) {
        hcf = findHCF(hcf, arr[i]);
    }
    return hcf;
}

// Function to calculate LCM of multiple numbers
int calculateLCM(int arr[], int n) {
    int lcm = arr[0];
    for (int i = 1; i < n; i++) {
        lcm = findLCM(lcm, arr[i]);
    }
    return lcm;
}

int main() {
    int numbers[6]; // Array to store six numbers

    printf("Enter six numbers:\n");
    for (int i = 0; i < 6; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]); // Input from the user
    }

    // Calculate HCF and LCM
    const int hcf = calculateHCF(numbers, 6);
    const int lcm = calculateLCM(numbers, 6);

    // Display results
    printf("\nHCF: %d\n", hcf);
    printf("LCM: %d\n", lcm);

    return 0;
}