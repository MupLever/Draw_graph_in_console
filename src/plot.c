#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "calculate.h"
#include "plot.h"
#define SCREENW 80
#define SCREENH 25

void plot(char* str) {
    trim(str);
    unsigned short int flag = 0;
    transform(str, &flag);
    if (valid_str(str) != 0 || flag || strlen(str) - 1 == 0) {
        printf("\n\t\tНеверное выражение либо, возможно, не хватает скобки!!!!\n");
    } else {
        char screen[SCREENH][SCREENW];
        double x, y, f[SCREENW];
        int i, j;
        double dx = 4 * M_PI / 79.0, dy = 1.0 / 12.0;
        for (i = 0, x = 0; i < SCREENW; ++i, x += dx) {
            Deque *head = parse(str);
            Deque *tail = get_tail(head);
            f[i] = calculate(tail, x);
        }
        for (j = 0, y = -1; j < SCREENH; j++, y += dy) {
            for (i = 0; i < SCREENW; i++) {
                if (fabs(f[i] - y) < 0.05)
                    screen[j][i] = '*';
                else
                    screen[j][i] = '.';
            }
        }
        for (j = 0; j < SCREENH; ++j) {
            for (i = 0; i < SCREENW; ++i)
                printf("%c", screen[j][i]);
            printf("\n");
        }
    }
}
