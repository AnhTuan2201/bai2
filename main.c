#include <stdio.h>
#include <stdlib.h>

#define IS_PRIME(num) (is_prime(num))

int is_prime(int num) {
    if (num <= 1) {
        return 0;  
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  
        }
    }
    return 1;  
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Sử dụng: %s a b\n", argv[0]);
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    if (a < 1 || b < 1 || a > b) {
        printf("Input 2 positive integers a b for 1 <= a <= b.\n");
        return 1;
    }

    printf("Prime numbers in the range from %d to %d:\n", a, b);
    if (a <= 2) {
        printf("2 ");
    }
    for (int num = (a % 2 == 0 ? a + 1 : a); num <= b; num += 2) {
        if (IS_PRIME(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
