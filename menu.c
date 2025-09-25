#include <stdio.h>
#include "functions.h"

int main() {
    int command;
    int arr[20];
    int size = 0;

    if (scanf("%d", &command) != 1) {
        printf("Данные некорректны\n");
        return 1;
    }

    while (size < 20 && scanf("%d", &arr[size]) == 1) {
        size++;
    }

    if (command == 0) {
        int first_neg = index_first_negative(arr, size);
        if (first_neg == -1) {
            printf("Данные некорректны\n");
        } else {
            printf("%d\n", first_neg);
        }
    } else if (command == 1) {
        int last_neg = index_last_negative(arr, size);
        if (last_neg == -1) {
            printf("Данные некорректны\n");
        } else {
            printf("%d\n", last_neg);
        }
    } else if (command == 2) {
        int product = multi_between_negative(arr, size);
        if (product == 0) {
            printf("Данные некорректны\n");
        } else {
            printf("%d\n", product);
        }
    } else if (command == 3) {
        int product = multi_before_and_after_negative(arr, size);
        if (product == 0) {
            printf("Данные некорректны\n");
        } else {
            printf("%d\n", product);
        }
    } else {
        printf("Данные некорректны\n");
    }

    return 0;
}
