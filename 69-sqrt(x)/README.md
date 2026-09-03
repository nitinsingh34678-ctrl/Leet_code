# LeetCode 69 - Sqrt(x)

## Problem

Given a non-negative integer `x`, return the integer square root of `x`.

The decimal part is discarded. Do not use the built-in square-root function.

### Examples

```text
Input: x = 4
Output: 2
```

```text
Input: x = 8
Output: 2
```

For `x = 8`, the actual square root is approximately `2.828`, so the integer answer is `2`.

## Approach

Use **Binary Search**.

- Set `left = 0` and `right = x`.
- Find `mid`.
- Calculate `mid * mid` using `long long` to avoid integer overflow.
- If the square equals `x`, return `mid`.
- If the square is smaller, search the right half.
- If the square is larger, search the left half.
- If there is no exact square root, return `right`.

## Complexity

- Time: `O(log x)`
- Space: `O(1)`
