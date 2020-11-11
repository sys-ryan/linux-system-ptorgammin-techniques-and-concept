### 1. Preprocessing 
- Text substitution  
- Execute Preprocessing directives  
- Input : User written C/C++ program  
- Output : Text Substituted C code  
```
gcc -E test.c -o test1.c
```

### 2. Compilation 
- Assembly code generation  
- Input : Text substituted C code  
- Output : Assembly code  
```
gcc -S test1.c -o test.s
```

### 3. Assembler
- Generate machine code from compiled code
- Input : Assembly code
- Output : machine code   -> Libraries
```
gcc -c test.s -o test.o
objdump -D test.o
```

### 4. Linking
- Linking with dependent Libraries and other object files  
- Input : machine code  
- Output : Final executable  
```
gcc test.o -o test.exe
objdump -D test.exe
```