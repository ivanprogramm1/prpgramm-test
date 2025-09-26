#include <stdio.h>
#include "functions.h"
#pragma once

int main() {
    int command;
    int arr[20];
    int size = 0;

    scanf("%d", &command);

    while (size < 20 && scanf("%d", &arr[size]) == 1) {
        size++;
    }

    if (command == 0) {
        printf("%d\n", index_first_negative(arr, size));
    } else if (command == 1) {
        printf("%d\n", index_last_negative(arr, size));
    } else if (command == 2) {
        printf("%d\n", multi_between_negative(arr, size));
    } else if (command == 3) {
        printf("%d\n", multi_before_and_after_negative(arr, size));
    } else {
        printf("Данные некорректны\n");
    }

    return 0;
}
