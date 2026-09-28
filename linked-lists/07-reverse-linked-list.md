
# Reverse Linked List

## LeetCode Problem

**Problem Number:** 206  
**Language:** C

## Problem Statement

Given the head of a singly linked list, reverse the linked list and return the reversed list.

## Example

Input:
```text
1 -> 2 -> 3 -> 4 -> 5
````

Output:

```text
5 -> 4 -> 3 -> 2 -> 1
```

## Approach

Use three pointers:

* `prev` stores the previous node.
* `current` stores the current node.
* `next` temporarily stores the next node.

For every node:

1. Store the next node.
2. Reverse the current node's link.
3. Move `prev` to the current node.
4. Move `current` to the next node.

## Algorithm

```text
prev = NULL
current = head

while current is not NULL:
    next = current->next
    current->next = prev
    prev = current
    current = next

return prev
```

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(1)

## Key Idea

Change the direction of each `next` pointer one node at a time.
