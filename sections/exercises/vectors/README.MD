## 🔢 VECTOR EXERCISES (1–4)

### 1️⃣ Conditional Stable Reordering

Given a vector of integers:

Move all even numbers to the beginning

Move all odd numbers to the end

Preserve the relative order within each group

📌 You are not allowed to use an auxiliary vector.

---
### 2️⃣ Maximum Frequency with Tie-Breaking

Given a vector:

Find the value that appears most frequently

If there is a tie, choose the smallest value

If all values appear once, report no repetitions

📌 Careful reasoning is required to handle ties correctly.

---
### 3️⃣ Maximum Subarray Sum (No Brute Force)

Given a vector with positive and negative numbers:

Find the contiguous subvector with the maximum sum

Output:

maximum sum

starting index

ending index

📌 You may not check all possible subvectors.

---

### 4️⃣ Partial Mirror Vector

Given a vector:

Reverse only the second half

Keep the first half unchanged

If the size is odd, the middle element stays in place

Example:

[1, 2, 3, 4, 5, 6] → [1, 2, 3, 6, 5, 4]

---

## 🧮 MATRIX EXERCISES (5–8)
### 5️⃣ Row-Dominant Matrix

A matrix is row-dominant if:

In every row, the diagonal element is greater than the sum of all other elements in that row

Determine whether a given matrix satisfies this condition.

📌 Do not confuse rows with columns.

---

### 6️⃣ 90° Rotation Without Auxiliary Matrix

Rotate a square matrix 90 degrees clockwise.

📌 Constraints:

No extra matrix allowed

Only swaps and index manipulation

This is a classic interview problem.

---

### 7️⃣ Zero Propagation Matrix

If any element in the matrix is 0:

Set its entire row and column to 0

📌 You are not allowed to use another matrix of the same size.

---

### 8️⃣ Minimum Path Sum

From the top-left corner to the bottom-right corner:

You may only move right or down

Find the minimum possible sum

📌 This problem introduces dynamic programming thinking.

---

## 🔷 PATTERN & LOGIC EXERCISES (9–10)
### 9️⃣ X-Pattern in a Matrix

Given a square matrix:

Display only the elements that form an X pattern

Replace all other positions with zeros or spaces

Conceptual example:

X   X
X
X   X


📌 Focus on indices, not values.

---

### 🔟 Alternating Spiral Traversal

Traverse a matrix as follows:

First layer → clockwise

Second layer → counter-clockwise

Alternate directions until reaching the center

📌 Requires precise boundary control and strong logic.