# Square

A small personal project to practice drawing shapes in the terminal with C.

## What is it?

A function that prints a rectangle (or a square) on screen, with borders.
Inspired by an exercise from the 42 piscine, but rewritten my own way to
really understand how edge cases work.

## Files

- `ft_putchar.c` : the base function, prints a single character
- `square.c` : the main function that draws the shape
- `main.c` : a usage example

## Compilation

gcc -Wall -Wextra -Werror main.c square.c ft_putchar.c -o square

## Usage

Edit the parameters in `main.c` and run it again:

./square

Example with `square(5, 3)`:

o---o
|   |
o---o

## Handled cases

- Width or height of 1 (a single line or a single column)
- Width or height of 0 or negative (prints nothing)
- Large sizes (tested up to 200x200, works fine)

## Notes

I struggled with the `x == 1` case at first, because there's no distinct
"right corner" when there's only one column. The fix is to check `x > 1`
before printing the right-side character.

Same thing for `y == 1` : the top line also acts as the bottom line,
so you have to avoid drawing it twice.

## What I learned

- `write()` takes a pointer, not a value (classic trap)
- Always check edge cases BEFORE the main loop
- Splitting into small functions makes the code more readable (and it
  passes the norm)

## Todo later

- [ ] Add other shapes (triangle, diamond)
- [ ] Take parameters from main arguments
- [ ] Color version with ANSI codes
