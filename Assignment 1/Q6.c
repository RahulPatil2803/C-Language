//6. Write a program to check if person is eligible to marry or not (male age >=21 and female age>=18).

#include <stdio.h>
void main() {
    int male_age = 25;
    int female_age = 19;
    char gender = 'M'; 

    if (gender == 'M') {
        if (male_age >= 21) {
            printf("Male is eligible to marry.\n");
        } else {
            printf("Male is not eligible to marry.\n");
        }
    } else if (gender == 'F') {
        if (female_age >= 18) {
            printf("Female is eligible to marry.\n");
        } else {
            printf("Female is not eligible to marry.\n");
        }
    } else {
        printf("Invalid gender.\n");
    }
}
