# 🧠 Exercise: Understanding C++ Data Types and Common Pitfalls

## 📌 Context

You are writing a small program for a **basic inventory system** used by a store.
The system must store information about a single product and print a summary
to the console.

The product has:
- An identification code
- A price
- A quantity in stock
- A discount percentage
- A flag indicating whether the product is available
- A short description

The program must **calculate the final price after discount** and display all
the information clearly.

---

## 🛠️ Requirements (implicit)

Your program should:
- Use **appropriate C++ data types** for each piece of information
- Perform a **calculation involving different data types**
- Print the result using `cout`
- Avoid unexpected behavior caused by type conversions

---

## ❗ Constraints

- The discount is given as a percentage (for example: 15%)
- The final price must keep decimal precision
- The description is a short text (one line)
- The availability must be either `true` or `false`

---

## 🧪 Test Case Example (for thinking, not hardcoded)
```text
Product ID: 1024
Price: 19.99
Quantity: 3
Discount: 15%
Available: true
Description: Wireless Mouse
```


---

## 🤔 Questions (Very Important)

Answer these **after** writing your code.

### 1️⃣ Data Types
- Which data type did you choose for:
    - Price?
    - Discount?
    - Quantity?
    - Availability?
- Why is `int` a bad choice for price?

---

### 2️⃣ Integer vs Floating-Point
- What happens if you calculate the discount using only `int` variables?
- Why does `19.99 * 15 / 100` sometimes produce unexpected results?

---

### 3️⃣ Precision and Accuracy
- What is the difference between `float` and `double`?
- Which one did you use, and why?

---

### 4️⃣ Implicit Conversions
- Does C++ automatically convert `int` to `double`?
- Is this conversion always safe?

---

### 5️⃣ Common Beginner Mistakes
- What happens if you store `15%` directly in a variable?
- What error occurs if you try to store text in a `char` instead of a `string`?
- Why can using `bool available = 1;` be confusing?

---

### 6️⃣ Output Formatting
- Why does `cout` sometimes print too many decimals?
- How could you control the number of decimal places?

---

### 7️⃣ Extra Thinking
- What would change if the quantity was very large?
- What data type would you use if prices needed extremely high precision?

---
### 5️⃣ Solution
* Here there's a recommended [solution](./simple_exercise
* .cpp)
---
## 🎯 Goal of the Exercise

This exercise is designed to help you:
- Understand **why data types matter**
- Detect **silent bugs** caused by wrong type choices
- Think like a programmer, not just write code

👉 Focus on **reasoning**, not just compiling.

Good luck 💪
