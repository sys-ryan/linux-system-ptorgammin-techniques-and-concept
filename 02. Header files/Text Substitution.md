root@3110ec956def:/# gcc -E app.c -o app.i


`-E`  :
see the version of the source file immediately after texts substitution has been performed on it.  

```
# 1 "app.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "app.c"
# 1 "B.h" 1
# 1 "A.h" 1

int sum(int a, int b);
# 2 "B.h" 2

int multiply(int a, int b);
# 2 "app.c" 2


int foo(int b);
int foo(int b) {

}

int main(){
     int a = (15 * 15);
}
```