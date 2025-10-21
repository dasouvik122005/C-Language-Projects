#include <stdio.h>
#include <math.h>

float squarearea(float side) { return side * side; }
float circlearea(float rad) { return 3.14159265f * rad * rad; }
float rectanglearea(float a, float b) { return a * b; }

int main(void) {
    float a = 5.0f, b = 10.0f;
    printf("Square area (side=%.2f): %.2f\n", a, squarearea(a));
    printf("Circle area (r=%.2f): %.2f\n", a, circlearea(a));
    printf("Rectangle area (%.2f x %.2f): %.2f\n", a, b, rectanglearea(a, b));
    return 0;
}
