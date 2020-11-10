
### Static library  
```
gcc -c dll.c -o dll.o
gcc -c dll_util.c -o dll_util.o

ar rs libdll.a dll.o dll_util.o
```


```
root@ryan:~/linux_programming# gcc -c dll.c -o dll.o
root@ryan:~/linux_programming# gcc -c dll_util.c -o dll_util.o
root@ryan:~/linux_programming# 
root@ryan:~/linux_programming# ls
dll.c  dll.h  dll.o  dll_util.c  dll_util.o
root@ryan:~/linux_programming# ar rs libdll.a dll.o dll_util.o
ar: creating libdll.a
root@ryan:~/linux_programming# ls -l
total 24
-rw-r--r-- 1 root root  859 11월 10 00:07 dll.c
-rw-r--r-- 1 root root  736 11월 10 00:07 dll.h
-rw-r--r-- 1 root root 1728 11월 10 00:07 dll.o
-rw-r--r-- 1 root root  400 11월 10 00:06 dll_util.c
-rw-r--r-- 1 root root 1472 11월 10 00:08 dll_util.o
-rw-r--r-- 1 root root 3496 11월 10 00:08 libdll.a
root@ryan:~/linux_programming# 

```



### Dynamic library  
```
gcc -c -fPIC dll.c -o dll.o  
gcc -c -fPIC dll_util.c -o dll_util.o  

gcc dll.o dll_util.o -shared -o libdll.so
```


```
root@ryan:~/linux_programming# gcc -c -fPIC dll.c -o dll.o
root@ryan:~/linux_programming# gcc -c -fPIC dll_util.c -o dll_util.o
root@ryan:~/linux_programming# 
root@ryan:~/linux_programming# gcc dll.o dll_util.o -shared -o libdll.so
root@ryan:~/linux_programming# 
root@ryan:~/linux_programming# ls -l
total 28
-rw-r--r-- 1 root root  859 11월 10 00:07 dll.c
-rw-r--r-- 1 root root  736 11월 10 00:07 dll.h
-rw-r--r-- 1 root root 1728 11월 10 00:11 dll.o
-rw-r--r-- 1 root root  400 11월 10 00:06 dll_util.c
-rw-r--r-- 1 root root 1472 11월 10 00:11 dll_util.o
-rwxr-xr-x 1 root root 8008 11월 10 00:11 libdll.so
root@ryan:~/linux_programming# 
```



## Linking with Static Library  
```
gcc -c application.c -o application.o  
gcc application.o -o exe -L . -ldll  
./exe
```


```
ryan@ubuntu01:~/linux_sys/05$ gcc -c application.c -o application.o
ryan@ubuntu01:~/linux_sys/05$ gcc application.o -o exe -L . -ldll
ryan@ubuntu01:~/linux_sys/05$ ./exe
Name = Jack
Age = 29
weight = 55
Name = Joseph
Age = 41
weight = 70
Name = Abhishek
Age = 31
weight = 75
ryan@ubuntu01:~/linux_sys/05$ 
```


## Linking with Dynamic Library
```
gcc -c application.c -o application.o
```
Place the `lib.so` file in default location in `/usr/lib` or `/usr/local/lib` and run `sudo ldconfig` command  
```
gcc application.o -o exe -ldll
./exe
```


```
ryan@ubuntu01:~/linux_sys/05$ gcc -c application.c -o application.o
ryan@ubuntu01:~/linux_sys/05$ gcc -c -fPIC dll.c -o dll.o
ryan@ubuntu01:~/linux_sys/05$ gcc -c -fPIC dll_util.c -o dll_util.o
ryan@ubuntu01:~/linux_sys/05$ gcc dll.o dll_util.o -shared -o libdll.so

ryan@ubuntu01:~/linux_sys/05$ sudo mv libdll.so /usr/lib

ryan@ubuntu01:~/linux_sys/05$ gcc application.o -o exe -ldll
ryan@ubuntu01:~/linux_sys/05$ ./exe 
Name = Jack
Age = 29
weight = 55
Name = Joseph
Age = 41
weight = 70
Name = Abhishek
Age = 31
weight = 75
```