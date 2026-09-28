# Valid Anagram

## Problem

Given two strings `s` and `t`, determine whether `t` is an anagram of `s`.

Two strings are anagrams if they contain the same characters with the same frequencies.

## Approach

1. If the lengths of the strings are different, they cannot be anagrams.
2. Create an array of 26 integers to store character frequencies.
3. Increase the count for each character in `s`.
4. Decrease the count for each character in `t`.
5. If all counts are zero, the strings are anagrams.

## Example

**Input:**

```text
s = "anagram"
t = "nagaram"
```

**Output:**

```text
true
```

## Complexity

* **Time Complexity:** O(n)
* **Space Complexity:** O(1)
