# C Programs: Dynamic Memory Allocation

This folder contains solutions for all three questions.

1. **`calloc_largest_smallest.c`** — allocates an array using `calloc()`, reads integers, and prints the largest and smallest values.
2. **`malloc_realloc_add_elements.c`** — allocates an array using `malloc()`, increases its size using `realloc()`, reads additional elements, and displays the complete array.
3. **`malloc_sum_average.c`** — allocates an array using `malloc()`, reads integers, and prints their sum and average.

Each program checks for invalid input/allocation failure and releases allocated memory with `free()`.

## Compile and run

Using GCC, compile each file separately, for example:

```bash
gcc calloc_largest_smallest.c -o calloc_largest_smallest
./calloc_largest_smallest

gcc malloc_realloc_add_elements.c -o malloc_realloc_add_elements
./malloc_realloc_add_elements

gcc malloc_sum_average.c -o malloc_sum_average
./malloc_sum_average
```

On Windows, run the resulting `.exe` file instead of `./program_name`.
