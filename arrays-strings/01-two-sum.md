## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

I used two nested loops to check every possible pair of numbers.
If the sum of two numbers is equal to the target, their indices are returned.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

The solution handles duplicate values. For example, when the input is
[3, 3] and the target is 6, the indices 0 and 1 are returned.