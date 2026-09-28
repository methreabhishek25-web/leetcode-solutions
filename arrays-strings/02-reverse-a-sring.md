# Reverse a String in C

## Problem

Write a C program to reverse a given string.

## Approach

1. Read the string from the user.
2. Find the length of the string using `strlen()`.
3. Start from the last character.
4. Print each character in reverse order.

## C Program

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
```

## Example

**Input:**

```text
hello
```

**Output:**

```text
olleh
```

## Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(n)
