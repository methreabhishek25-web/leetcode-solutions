
# Binary Search

## LeetCode Problem

**Problem Number:** 704  
**Language:** C

## Problem Statement

Given a sorted array of integers and a target value, find the index of the target.

If the target is not present, return `-1`.

## Example

Input:
```text
nums = [-1, 0, 3, 5, 9, 12]
target = 9
````

Output:

```text
4
```

## Approach

1. Set `left` to the first index.
2. Set `right` to the last index.
3. Find the middle index.
4. If the middle element equals the target, return its index.
5. If the middle element is smaller than the target, search the right half.
6. Otherwise, search the left half.
7. Return `-1` if the target is not found.

## Complexity

* Time Complexity: O(log n)
* Space Complexity: O(1)

## Key Idea

Binary search repeatedly divides the sorted array into two halves, reducing the search area by half each time.

