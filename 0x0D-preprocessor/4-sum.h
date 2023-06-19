include <stdio.h>

#define ABS(x) ((x) < 0 ? -(x) : (x))

int main() {
    int number = -10;
    int absValue = ABS(number);

    printf("Absolute value of %d is %d\n", number, absValue);
    return 0;
}
