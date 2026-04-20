# 📦 C++ STL – `pair` and `tuple` (Beginner to Professional Guide)

Welcome to the **C++ STL Pair & Tuple** guide 🎉

This repository explains how to use:

- `std::pair`
- `std::tuple`
- Structured Bindings (C++17)
- Sorting collections of pairs
- Nested pairs
- `std::tie`, `std::ignore`, and `tuple_cat`

All explanations are beginner-friendly and based on real working examples from this project.

---

# 📘 What is `std::pair`?

`std::pair` is a container that stores **exactly two values**.

Think of it like a small box that holds:

```
(first value, second value)
```

Example:

```cpp
pair<string, int> student = {"Alice", 20};
```

Here:

- `first` → `"Alice"`
- `second` → `20`

---

# 📘 What is `std::tuple`?

`std::tuple` is like an advanced version of `pair`.

It can store:

- 2 values
- 3 values
- 4 values
- Or even more!

Example:

```cpp
tuple<string, int, double> data = {"Alice", 1, 95.5};
```

Unlike `pair`, tuples are accessed using `get<index>()`.

---

# 📂 Project Structure

| File                                  | Topic                                         |
| ------------------------------------- | --------------------------------------------- |
| `01_pair_declarations_and_io.cpp`     | Pair basics, input/output, structured binding |
| `02_pair_collections_and_sorting.cpp` | Vector of pairs & sorting                     |
| `03_nested_pairs.cpp`                 | Nested pairs                                  |
| `04_tuple_basics_and_io.cpp`          | Tuple basics & input/output                   |
| `05_tuple_advanced_tricks.cpp`        | tie, ignore, tuple_cat                        |

---

# 🔹 PART 1: Understanding `std::pair`

---

## 🧱 1. Pair Declaration Methods

From: `01_pair_declarations_and_io.cpp`

### Different Ways to Declare a Pair

```cpp
pair<string, int> p1;
pair<string, int> p2("Alice", 20);
pair<string, int> p3 = make_pair("Bob", 22);
pair<string, int> p4 = {"Charlie", 25};
```

### Beginner Explanation

- `p1` → default initialized (`""`, 0)
- `p2` → direct initialization
- `make_pair()` → classic STL way
- `{}` → modern and clean (recommended)

---

## 🧾 Accessing Pair Values

```cpp
cout << p4.first;
cout << p4.second;
```

- `.first` → first value
- `.second` → second value

---

## 🧠 Structured Binding (C++17 – Cleanest Way)

```cpp
auto [name, age] = p4;
```

Now you can use:

```cpp
cout << name << " - " << age;
```

Even modify using reference:

```cpp
auto& [ref_name, ref_age] = p4;
ref_name = "Updated";
```

Very clean and professional.

---

## ⌨️ Taking Input in Pair

You CANNOT do:

```cpp
cin >> p;
```

Instead:

```cpp
cin >> p.first >> p.second;
```

---

# 🔹 PART 2: Pair Collections & Sorting

From: `02_pair_collections_and_sorting.cpp`

---

## 📦 Vector of Pairs

```cpp
vector<pair<string, int>> students;
```

This is commonly used in:

- Competitive programming
- Storing name-score
- Coordinates
- Key-value data

---

## 🏃 Adding Elements

```cpp
students.emplace_back(name, score);
```

`emplace_back()` is slightly faster than `push_back()`.

---

## 🔄 Sorting Pairs

```cpp
sort(students.begin(), students.end());
```

### How Sorting Works

- First compares `.first`
- If equal → compares `.second`

Example:

```
(Alice, 90)
(Bob, 80)
(Charlie, 70)
```

Sorted alphabetically by name automatically.

---

## 🧠 Structured Binding in Loop

```cpp
for (auto [name, score] : students)
```

Much cleaner than:

```cpp
for (auto student : students)
    cout << student.first;
```

---

# 🔹 PART 3: Nested Pairs

From: `03_nested_pairs.cpp`

---

## 📦 Nested Pair Example

```cpp
pair<string, pair<int, string>> student;
```

Think of it like:

```
(Name, (Roll, Phone))
```

Accessing values:

```cpp
student.first                // Name
student.second.first         // Roll
student.second.second        // Phone
```

---

## 🧠 Clean Unpacking

```cpp
auto [name, details] = student;
auto [roll, phone] = details;
```

Much more readable.

---

# 🔹 PART 4: Understanding `std::tuple`

---

## 🧱 Tuple Declaration

From: `04_tuple_basics_and_io.cpp`

```cpp
tuple<string, int, double> t2("Alice", 1, 95.5);
```

Or:

```cpp
tuple<string, int, string> t4 = {"Masum", 1, "0179860065"};
```

---

## 🧾 Accessing Tuple Values

You must use:

```cpp
get<0>(t)
get<1>(t)
get<2>(t)
```

Unlike pair, there is NO `.first`.

---

## ⌨️ Taking Input in Tuple

```cpp
cin >> get<0>(coordinates)
    >> get<1>(coordinates)
    >> get<2>(coordinates);
```

---

## 🧠 Structured Binding (Recommended)

```cpp
auto [name, roll, phone] = t4;
```

Much cleaner than multiple `get<>()` calls.

---

# 🔹 PART 5: Advanced Tuple Tricks

From: `05_tuple_advanced_tricks.cpp`

---

## 🪢 1. std::tie()

Used to unpack tuple into existing variables.

```cpp
int code;
string message;
double pi;

tie(code, message, pi) = data;
```

Very useful before C++17.

---

## 🚫 2. std::ignore

If you don’t care about some values:

```cpp
tie(ignore, just_message, ignore) = data;
```

This ignores unwanted elements.

---

## ✏️ 3. Modifying Tuple Values

```cpp
get<0>(data) = 200;
get<1>(data) = "OK";
```

---

## 🔗 4. tuple_cat()

Combine multiple tuples:

```cpp
auto combined = tuple_cat(tA, tB);
```

Creates a larger tuple.

---

# ⚖️ Time Complexity

| Operation               | Complexity     |
| ----------------------- | -------------- |
| Access pair element     | O(1)           |
| Access tuple element    | O(1)           |
| Inserting in vector     | O(1) amortized |
| Sorting vector of pairs | O(n log n)     |

---

# 🧠 When to Use What?

| Use Case                | Recommended               |
| ----------------------- | ------------------------- |
| Exactly 2 values        | `pair`                    |
| More than 2 values      | `tuple`                   |
| Need readable code      | Structured Binding        |
| Complex structured data | Consider `struct` instead |

---

# 🚀 Best Practice Advice

✔ Use structured binding (C++17+)
✔ Prefer `emplace_back()`
✔ Use meaningful variable names
✔ Avoid deeply nested pairs in real projects (use struct/class instead)

---

# 🎯 Summary

- `pair` → stores 2 values
- `tuple` → stores multiple values
- Structured binding makes code cleaner
- Sorting pairs is automatic by `.first`
- `tie()` and `ignore` are powerful tools
- `tuple_cat()` merges tuples

This repository moves from beginner basics to professional-level STL usage.

---


# Author

**Engr. Md Monjur Bakth Mazumder**

🎓 Diploma in Computer Science and Technology — [Moulvibazar Polytechnic Institute](https://mpi.moulvibazar.gov.bd/)  
🎓 BSc in Computer Science & Engineering (CSE) (Ongoing) — [Sylhet International University](https://siu.edu.bd/)

📧 Email: monjurmbm404@gmail.com

### ⭐ If you find this helpful, don’t forget to **star** the repository!git add .