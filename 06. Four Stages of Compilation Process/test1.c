# 1 "test.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "test.c"
# 1 "test.h" 1
# 2 "test.c" 2




double
compute_square(int x){
    return (x*x);
}

double
compute_circle_area(int radius){
    return 3.14 * compute_square(radius);
}

int
main(int argc, char **argv){
    int radius = 10;
    compute_circle_area(radius);
    compute_circle_area(100);
    return 0;
}
