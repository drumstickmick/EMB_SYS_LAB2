/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

int nth_term=30;

int fib(int n);

int main () {

printf("nth_term = %d \r\n", nth_term);

for(int i=0; i<nth_term; i++) {

printf("%d, ", fib(i));
}
printf("...!\r\n");
}

int fib(int n) {
    if (n == 0)
    return 0;
    if (n == 1)
    return 1;
    else {
        return(fib(n-1) + fib(n-2));
    }
}

