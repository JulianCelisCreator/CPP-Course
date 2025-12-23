# 🧠 Exercise: Sizes and Capacity of C++ Data Types

## 📌 Context

You are exploring how much memory different **fundamental C++ data types**
occupy and how many values they can represent.

Your task is to write a program that prints information about the most commonly
used data types in C++.

---

## 🛠️ Requirements (implicit)

Your program must:
- Print the **size in bytes** of each data type
- Indicate **how many characters or values can fit** in each type
- Use `cout` for all output
- Avoid hardcoded numbers when possible

---

## 📋 Data Types to Analyze

Your program should analyze at least:
- `char`
- `unsigned char`
- `int`
- `unsigned int`
- `float`
- `double`
- `bool`

---

## 🤔 Questions (Answer after coding)

### 1️⃣ Size and Storage
- What does `sizeof` return?
- Why is the size of `int` not the same on all systems?

---

### 2️⃣ Characters and Limits
- How many different values can a `char` represent?
- Why does `unsigned char` store more positive values than `char`?

---

### 3️⃣ Common Beginner Errors
- What happens if you assume `char` always stores letters?
- Why is it dangerous to assume `int` is always 4 bytes?
- What value does `bool` actually store in memory?

---

### 4️⃣ Output Reasoning
- Why is the size of `bool` not always 1 byte?
- Why does `cout` print `true` as `1` by default?

---
### 5️⃣ Solution
* Here there's a recommended [solution](./data_types.cpp)

---

## 🎯 Goal of the Exercise

This exercise helps you:
- Understand **memory representation**
- Stop guessing data type sizes
- Learn why portability matters in C++

👉 Focus on **printing and reasoning**, not calculations.

Good luck 💪
