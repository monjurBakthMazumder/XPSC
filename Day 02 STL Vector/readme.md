# 📘 C++ STL – `std::vector` (Complete Beginner to Advanced Guide)

Welcome to the **C++ STL Vector Mastery Guide** 🚀

This repository explains everything you need to understand about `std::vector` — from memory structure to STL algorithms.

If you are learning Data Structures, Competitive Programming, or modern C++, mastering `vector` is essential.

---

# 📦 What is `std::vector`?

`std::vector` is a **dynamic array** provided by the C++ Standard Library.

Unlike normal arrays:

- It can grow automatically.
- It manages memory for you.
- It provides powerful built-in functions.

Think of `vector` as a **smart array**.

---

# 📂 Project Structure

| File                              | Topic                            |
| --------------------------------- | -------------------------------- |
| `01_structure_and_memory.cpp`     | Size, capacity, memory structure |
| `02_iterators_and_navigation.cpp` | Iterators and navigation         |
| `03_insertion_and_deletion.cpp`   | Insert, erase, clear             |
| `04_stl_power_tools.cpp`          | Sorting, searching, algorithms   |

---

# 🔹 PART 1: Structure & Memory

From: `01_structure_and_memory.cpp`

---

## 📏 Size vs Capacity

```cpp
vector<int> v = {10, 20, 30};
v.push_back(40);
```

### 🧠 Important Concepts

- `size()` → Number of elements stored
- `capacity()` → Amount of allocated memory

Example:

```cpp
cout << v.size();      // 4
cout << v.capacity();  // May be 6 or 8
```

⚠ Capacity is usually larger than size because vector allocates extra memory to avoid frequent resizing.

---

## 🚀 Why `reserve()` is Important

```cpp
v.reserve(1000);
```

If you know in advance that you need many elements:

✔ Prevents multiple memory reallocations
✔ Improves performance
✔ Avoids O(N) copying many times

This is professional-level optimization.

---

## 🧾 Accessor Functions

```cpp
v.front();  // First element
v.back();   // Last element
v.data();   // Pointer to internal array
```

`data()` is useful when:

- Passing vector to C-style functions
- Interacting with low-level APIs

---

# 🔹 PART 2: Iterators & Navigation

From: `02_iterators_and_navigation.cpp`

---

## 🔁 What is an Iterator?

An iterator is like a **pointer** that helps you move through a container.

---

## ➡ Forward Iterators

```cpp
auto it_start = v.begin();
auto it_end = v.end();
```

- `begin()` → Points to first element
- `end()` → Points to position AFTER last element

⚠ `end()` does NOT point to actual data. It’s like a wall.

---

## ⬅ Reverse Iterators

```cpp
auto rit_start = v.rbegin();
auto rit_end = v.rend();
```

- `rbegin()` → Last element
- `rend()` → Before first element

---

## 🧠 Dereferencing & Arithmetic

```cpp
cout << *it_start;        // First value
cout << *(v.end() - 1);   // Last value
```

Vector supports random access:

- `it + 1`
- `it - 1`
- `it + n`

This is why vector is very powerful.

---

# 🔹 PART 3: Insertion & Deletion

From: `03_insertion_and_deletion.cpp`

---

## ➕ Insert at Specific Position

```cpp
v.insert(v.begin() + 1, 15);
```

Result:

```
{10, 15, 20, 30}
```

---

## ❌ Erase Single Element

```cpp
v.erase(v.begin() + 2);
```

---

## ❌ Erase Range

```cpp
v.erase(v.begin(), v.begin() + 2);
```

Deletes elements in range `[start, end)`.

---

## 🧹 Clear Vector

```cpp
v.clear();
```

Important:

- Size → 0
- Capacity → Usually unchanged

---

## ⚠ Time Complexity

| Operation | Complexity     |
| --------- | -------------- |
| push_back | O(1) amortized |
| insert    | O(N)           |
| erase     | O(N)           |
| clear     | O(N)           |

Insertion/deletion in middle is expensive because elements shift.

---

# 🔹 PART 4: STL Power Tools

From: `04_stl_power_tools.cpp`

---

## 🔃 Sorting

```cpp
sort(v.begin(), v.end());      // Ascending
sort(v.rbegin(), v.rend());    // Descending
```

Complexity: **O(N log N)**

---

## 🔍 Binary Search

```cpp
binary_search(v.begin(), v.end(), 4);
```

⚠ Vector MUST be sorted first.

Complexity: **O(log N)**

---

## 📌 Bounds

```cpp
lower_bound(v.begin(), v.end(), 2);
upper_bound(v.begin(), v.end(), 2);
```

- `lower_bound` → First element ≥ X
- `upper_bound` → First element > X

Very important in competitive programming.

---

## 📊 Min / Max

```cpp
max_element(v.begin(), v.end());
min_element(v.begin(), v.end());
```

Complexity: O(N)

---

## 🔄 Reverse

```cpp
reverse(v.begin(), v.end());
```

---

## ➕ Accumulate (Sum of Elements)

```cpp
accumulate(v.begin(), v.end(), 0);
```

From `<numeric>` header.

---

# 🧠 When Should You Use `vector`?

✔ When you need dynamic resizing
✔ When you need fast random access (O(1))
✔ When using STL algorithms
✔ In competitive programming

---

# 🏆 Professional Tips

✅ Always use `reserve()` if size is predictable
✅ Prefer `emplace_back()` over `push_back()` for complex types
✅ Remember insert/erase in middle is O(N)
✅ Always sort before using binary search
✅ Use iterators with STL algorithms

---

# 📊 Summary Table

| Feature         | Complexity     |
| --------------- | -------------- |
| Access by index | O(1)           |
| push_back       | O(1) amortized |
| insert          | O(N)           |
| erase           | O(N)           |
| sort            | O(N log N)     |
| binary_search   | O(log N)       |

---

# 🎯 Final Thoughts

`std::vector` is:

- The most commonly used STL container
- A dynamic array
- Cache-friendly
- Algorithm-compatible
- Beginner-friendly yet powerful

If you master `vector`, you unlock most of STL power.

---


# Author

**Engr. Md Monjur Bakth Mazumder**

🎓 Diploma in Computer Technology — [Moulvibazar Polytechnic Institute](https://mpi.moulvibazar.gov.bd/)  
🎓 BSc in CSE (Running) — [Sylhet International University](https://siu.edu.bd/)

📧 Email: monjurmbm404@gmail.com

### ⭐ If you find this helpful, don’t forget to **star** the repository!