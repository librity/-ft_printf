# ft_printf

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
