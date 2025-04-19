#include <stdio.h>

int main() {
    float bmi = 30.5;//printf and scanf

    if (bmi < 18.5) {
        printf("Underweight\n");
    } else if (bmi >= 18.5 && bmi < 24.9) { //true and  False : False
        printf("Normal weight\n");
    } else if (bmi >= 25 && bmi < 29.9) {
        printf("Overweight\n");
    } else {
        printf("Obese\n");
    }
    return 0;
}
