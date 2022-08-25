#include "plot.h"
#include "parse_str.h"
#include "calculate.h"
#include "deque.h"
#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    char str[80];
    puts("Введите выражение:");
    fgets(str, 79, stdin);
    plot(str);
    return 0;
}
