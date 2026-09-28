# Best Time to Buy and Sell Stock

## LeetCode Problem

**Problem Number:** 121  
**Language:** C

## Problem Statement

Given an array of stock prices, find the maximum profit that can be achieved by buying on one day and selling on a later day.

Only one transaction is allowed.

## Example

Input:
```text
[7, 1, 5, 3, 6, 4]
````

Output:

```text
5
```

## Explanation

Buy the stock at price `1` and sell it at price `6`.

Profit:

```text
6 - 1 = 5
```

## Approach

1. Store the minimum price seen so far.
2. Calculate the profit for each current price.
3. Store the maximum profit.
4. Update the minimum price whenever a smaller price is found.

## Algorithm

```text
minPrice = first price
maxProfit = 0

For each price:
    profit = price - minPrice

    if profit > maxProfit:
        update maxProfit

    if price < minPrice:
        update minPrice

Return maxProfit
```

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(1)

## Key Idea

Keep track of the lowest price so far and calculate the profit if the stock is sold at the current price.


