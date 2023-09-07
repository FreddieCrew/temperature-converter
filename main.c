#include <stdio.h>

int main() {
    char choice;
    double temperature, result;

    printf("Type 'c' to convert Fahrenheit in Celsius or type 'f' to convert Celsius in Fahrenheit: ");
    scanf_s(" %c", &choice, sizeof(choice));

    if (choice == 'c' || choice == 'C') {
        printf("Type the Fahrenheit degrees: ");
        scanf_s("%lf", &temperature);
        result = (temperature - 32) * 5.0 / 9.0;
        printf("%.2lf Fahrenheit = %.2lf Celsius\n", temperature, result);
    }
    else if (choice == 'f' || choice == 'F') {
        printf("Type the Celsius degrees: ");
        scanf_s("%lf", &temperature);
        result = (temperature * 9.0 / 5.0) + 32;
        printf("%.2lf Celsius = %.2lf Fahrenheit\n", temperature, result);
    }
    else {
        printf("Invalid choice, please, type 'c' or 'f' in the console.\n");
    }

    system("pause");
    return 0;
}
