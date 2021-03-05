# ft_printf

[![42TESTERS-PRINTF](https://github.com/librity/ft_printf/actions/workflows/42TESTERS-PRINTF.yml/badge.svg)](https://github.com/librity/ft_printf/actions/workflows/42TESTERS-PRINTF.yml)
[![FT_PRINTF_TEST](https://github.com/librity/ft_printf/actions/workflows/FT_PRINTF_TEST.yml/badge.svg)](https://github.com/librity/ft_printf/actions/workflows/FT_PRINTF_TEST.yml)
[![PFT_2019](https://github.com/librity/ft_printf/actions/workflows/PFT_2019.yml/badge.svg)](https://github.com/librity/ft_printf/actions/workflows/PFT_2019.yml)

42 Sao Paulo project - ft_printf

## Testers

Github Actions by [@wblech](https://github.com/wblech/42_github_actions)

- https://github.com/cclaude42/PFT_2019
- https://github.com/Mazoise/42TESTERS-PRINTF
- https://github.com/cacharle/ft_printf_test

## Snippets

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
