# Snippets

```bash
echo '
.vscode
test.c
test/
tests/
tests/*
test*
example.c
a.out.dSYM
*.out
*.a
*.o
*/core
core
*.rb
' >> .git/info/exclude

# USE CLANG ON LINUX!
clang -Wall -Wextra -Werror *.c && ./a.out
clang -Wall -Wextra -Werror *.c && time ./a.out

gcc -Wall -Wextra -Werror *.c && ./a.out
gcc -Wall -Wextra -Werror *.c && time ./a.out

norminette *.c *.h
```

```c
# include <stdint.h>

int8_t i; // signed char
int16_t i; // signed short
int32_t i; // signed int
int64_t i; // signed long

uint8_t i; // unsigned char
uint16_t i; // unsigned short
uint32_t i; // unsigned int
uint64_t i; // unsigned long

intmax_t i; // long
uintmax_t i; // unsigned long
size_t i; // unsigned long
```
