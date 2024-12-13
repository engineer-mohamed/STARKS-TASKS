#include "lab1.h"

static int callCount = 0;

float calculateAverage(float num1, float num2) {
    callCount++;
    return (num1 + num2) / 2.0;
}

int getCallCount() {
    return callCount;
}

