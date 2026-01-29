#include <stdio.h>

void toRoman(int num) {
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL",
                       "X", "IX", "V", "IV", "I"};

    for(int i = 0; i < 13; i++) {
        while(num >= values[i]) {
            printf("%s", symbols[i]);
            num -= values[i];
        }
    }
}

int main() {
    int n;
    printf("Enter a number (1 to 3999): ");
    scanf("%d", &n);

    if(n < 1 || n > 3999) {
        printf("Invalid! Enter between 1 and 3999.\n");
    } else {
        printf("Roman numeral: ");
        toRoman(n);
    }

    return 0;
}
