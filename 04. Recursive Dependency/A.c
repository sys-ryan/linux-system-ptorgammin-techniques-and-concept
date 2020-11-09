/*
`Recursive Dependency`
A compiler must know the complete size of the structure at the compile time. 
It means, compiler must know the size of each individual fields of the structure definition it is compiling

```
struct emp_t {
        char name[32];
        unsigned int emp_id;
        struct occ_t occ;
};

struct occ_t {
        char designation[32];
        unsigned int salary;
        struct emp_t boss;
};
```

[Comile]
```
root@ryan:~# gcc -c A.c -o A.o
A.c:4:15: error: field ‘occ’ has incomplete type
  struct occ_t occ;
               ^~~
```
*/

// Forward declaration 
struct ooc_t;   // Tells the complier that `struct occ_t` will be defined in the future 
                //and tolerate if it is used as pointer. 

struct emp_t{
    char name[32];
    unsigned int emp_id;
    struct occ_t *pcc;
};

struct occ_t{
    char designation[32];
    unsigned int salary;
    struct emp_t boss;
};