#include <stdio.h>

int main() {
    float gpa = 4;
    int extracurriculars = 5;

    if (gpa > 3.5) {
        printf("Congratulations.\n");
        if (extracurriculars > 3) {
            printf("Qualified for honors program.\n");
        }else {
            printf("Not Qualified for honors program.\n");
        }
    }else{
        printf("Main if is not satisfied so output is here.\n");

    }
    return 0;
}
