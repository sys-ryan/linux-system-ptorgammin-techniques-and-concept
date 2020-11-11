#include "test.h"
#define SQUARE(x) (x*x)

#define DEFAULT_RADIUS 100

double
compute_square(int x){
    return SQUARE(x);
}

double
compute_circle_area(int radius){
    return PI * compute_square(radius);
}

int
main(int argc, char **argv){
    int radius = 10;
    compute_circle_area(radius);
    compute_circle_area(DEFAULT_RADIUS);
    return 0;
}
