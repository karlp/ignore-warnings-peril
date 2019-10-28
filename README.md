## Missing Prototypes are bad mkay?

Yea yeh, the linker will "just figure it out" and "they're just warnings...."
Except, they're not, and depending on how you call things, you just
get a default prototype, and that might not be what you intended.

In the case here, you get different results from a shared call, depending
on which default proto got assigned.

## Compile the code, and ignore the warnings. links fine.
```
karlp@strem:~/src/missing-protos-trap$ gcc -c other.c
karlp@strem:~/src/missing-protos-trap$ gcc -c main.c
main.c: In function ‘do_thing_in_main’:
main.c:9:12: warning: implicit declaration of function ‘get_float’ [-Wimplicit-function-declaration]
  float x = get_float();
            ^~~~~~~~~
main.c: In function ‘main’:
main.c:17:2: warning: implicit declaration of function ‘do_other_thing’ [-Wimplicit-function-declaration]
  do_other_thing();
  ^~~~~~~~~~~~~~
karlp@strem:~/src/missing-protos-trap$ gcc -o hoho main.o other.o
```

## Now run it.  ooops!
```
karlp@strem:~/src/missing-protos-trap$ ./hoho
Float in main = 0.000000
in the other thing, x = 123450.000000
```

