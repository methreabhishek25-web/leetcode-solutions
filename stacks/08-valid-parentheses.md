
# Valid Parentheses

## LeetCode Problem

**Problem Number:** 20  
**Language:** C

## Problem Statement

Given a string containing `(`, `)`, `{`, `}`, `[` and `]`, determine if the brackets are valid.

A valid string must have:

1. Every opening bracket closed by the same type of bracket.
2. Brackets closed in the correct order.
3. Every closing bracket must have a matching opening bracket.

## Example

Input:
```text
"{[()]}"
````

Output:

```text
true
```

## Approach

Use a stack.

1. Push every opening bracket onto the stack.
2. When a closing bracket appears, compare it with the top of the stack.
3. If they match, remove the opening bracket.
4. If they do not match, return false.
5. At the end, the stack must be empty.

## Algorithm

```text
Create an empty stack

For each character:
    If it is an opening bracket:
        push it into the stack

    Otherwise:
        If stack is empty:
            return false

        Pop the top bracket

        If brackets do not match:
            return false

Return true if stack is empty
```

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(n)

## Key Idea

A stack follows **Last In, First Out (LIFO)**, which makes it suitable for matching brackets in reverse order.
