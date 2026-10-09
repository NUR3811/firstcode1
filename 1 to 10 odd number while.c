#include <stdio.h>

int main() {
    int sum = 0;
    int i = 1;

    while (i <= 10) {
        sum += i;
        i += 2;
    }

    printf("1 to 10 odd number: %d\n", sum);

    return 0;
}
