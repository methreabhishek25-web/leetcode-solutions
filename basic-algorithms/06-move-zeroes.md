
# Move Zeroes

## LeetCode Problem

**Problem Number:** 283  
**Language:** C

## Problem Statement

Given an integer array, move all `0`s to the end of the array while maintaining the relative order of the non-zero elements.

The operation should be done in-place.

## Example

Input:
```text
[0, 1, 0, 3, 12]
````

Output:

```text
[1, 3, 12, 0, 0]
```

## Approach

1. Use an index to store the position of the next non-zero element.
2. Traverse the array.
3. Copy every non-zero element to the current index.
4. Fill the remaining positions with zeroes.

## Algorithm

```text
index = 0

For each element:
    If element is not 0:
        place it at arr[index]
        increase index

Fill remaining positions with 0
```

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(1)

## Key Idea

Move all non-zero elements to the front and then fill the remaining positions with zeroes.

