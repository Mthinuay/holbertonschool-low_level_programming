#ifndef MAIN_H
#define MAIN_H

#include <stdio. format the numbers, which makes this task much simpler than printing each digit with `_putchar`.

The logic splits into two main cases:
1.  **If the starting number `n` is less than or equal to 98**, we need a `for` loop that counts **up** from `n` to 98.
2.  **If `n` is greater than 98**, we need a `for` loop that counts **down** from `n` to 98.

Inside each loop, we need to handle the formatting: print the number, but only print a comma and space if it's not the final number (98).

As always, we'll update `main.h` with the new prototype.

Here is the complete sequence of commands.

---
### Commands to Execute

**Step 1: Navigate to the correct directory**
```bash
cd ~/holbertonschool-low_level_programming/functions_nested_loops
cat > main.h << 'EOF'
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);

#endif
