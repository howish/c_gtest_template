#ifndef __EXAMPLE_H
#define __EXAMPLE_H


typedef struct {
    int x;
    int y;
} Point;

bool IsSamePoint(Point a, Point b);
int Add(int x, int y);
Point AddPoint(Point x, Point y);

#endif /* __EXAMPLE_H */
