#include <stdbool.h>
#include <stdio.h>
#include "Arithmetics.h"


bool IsSamePoint(Point a, Point b) {
    return a.x == b.x && a.y == b.y;
}

int Add(int x, int y) {
    return x + y;
}

Point AddPoint(Point x, Point y) {
    Point newPoint;
    newPoint.x = x.x + y.x;
    newPoint.y = x.y + y.y;
    return newPoint;
}
