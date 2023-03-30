/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

int nth_term=14;
int term_1, term_2;
int next_term=0;

int main () {
term_1=0;
term_2=1;

printf("nth_term is %d \r\n", nth_term);
printf("0, 1, ");

for(int i=2; i<nth_term; i++) {
next_term=term_1+term_2;
printf("%d, ", next_term);
term_1=term_2;
term_2=next_term;
    }
printf("...!\r\n");
}
