# 📘 C++ STL – `std::deque` (Complete Beginner to Advanced Guide)

Welcome to the **C++ STL Deque Mastery Repository** 🚀

This project explains everything about `std::deque` — from basic structure to advanced real-world usage like sliding window maximum.

If you already learned `vector`, this will help you understand when and why `deque` is even more powerful.

---

# 📦 What is `std::deque`?

`std::deque` stands for **Double-Ended Queue**.

It is a dynamic container that allows:

* Fast insertion at the front ✅
* Fast insertion at the back ✅
* Random access like an array ✅

Think of it as a mix of:

* `vector` (random access)
* `queue` (push/pop from front and back)

---

# 🔥 Why Use `deque` Instead of `vector`?

| Feature       | vector | deque  |
| ------------- | ------ | ------ |
| Random access | ✅ O(1) | ✅ O(1) |
| push_back     | ✅ Fast | ✅ Fast |
| push_front    | ❌ Slow | ✅ Fast |
| pop_front     | ❌ Slow | ✅ Fast |

👉 If you need operations at **both ends**, use `deque`.

---

# 📂 Project Structure

| File                              | Topic                         |
| --------------------------------- | ----------------------------- |
| `01_structure_and_memory.cpp`     | Basic structure & access      |
| `02_iterators_and_navigation.cpp` | Iteration (forward & reverse) |
| `03_insertion_and_deletion.cpp`   | Insert, erase, resize         |
| `04_stl_power_tools.cpp`          | Algorithms with deque         |
| `05_advanced_features.cpp`        | Emplace, swap, comparison     |
| `06_real_world_patterns.cpp`      | Sliding window maximum        |

---

# 🔹 PART 1: Structure & Basic Operations

From: `01_structure_and_memory.cpp`

---

## 🧱 Declaration

```cpp
deque<int> dq;
deque<int> dq2 = {10, 20, 30, 40};
```

---

## 📏 Size

```cpp
dq2.size();
```

Returns number of elements.

---

## 📌 Accessing Elements

```cpp
dq2.front();  // First element
dq2.back();   // Last element
dq2[2];       // Index-based access
dq2.at(1);    // Safe access (throws error if out of range)
```

### 🧠 Difference Between `[]` and `at()`

* `[]` → No bounds checking
* `at()` → Safe, checks bounds

---

## 🚪 Checking Empty

```cpp
dq.empty();
```

Returns:

* `true` (1)
* `false` (0)

---

# 🔹 PART 2: Iterators & Navigation

From: `02_iterators_and_navigation.cpp`

---

## ➡ Forward Iteration

```cpp
for (auto it = dq.begin(); it != dq.end(); it++)
```

* `begin()` → first element
* `end()` → position after last element

---

## ⬅ Reverse Iteration

```cpp
for (auto it = dq.rbegin(); it != dq.rend(); it++)
```

* `rbegin()` → last element
* `rend()` → before first element

---

## 🧠 Important

Like `vector`, `deque` supports:

* Random access iterators
* `it + n`
* `it - n`

---

# 🔹 PART 3: Insertion & Deletion

From: `03_insertion_and_deletion.cpp`

---

## ➕ Push Operations

```cpp
dq.push_back(40);
dq.push_front(5);
```

Both are **O(1)** operations.

---

## ➖ Pop Operations

```cpp
dq.pop_back();
dq.pop_front();
```

Also **O(1)**.

---

## 📌 Insert at Position

```cpp
dq.insert(dq.begin() + 1, 99);
```

Complexity: **O(N)** (elements shift)

---

## ❌ Erase

```cpp
dq.erase(dq.begin());              // Single
dq.erase(dq.begin(), dq.begin()+1); // Range
```

---

## 🔄 Assign

```cpp
dq.assign(5, 100);
```

Creates 5 elements of value 100.

---

## 📐 Resize

```cpp
dq.resize(3);
```

* If smaller → removes elements
* If larger → adds default values

---

## 🧹 Clear

```cpp
dq.clear();
```

Removes all elements.

---

# 🔹 PART 4: STL Power Tools

From: `04_stl_power_tools.cpp`

---

## 🔃 Sort

```cpp
sort(dq.begin(), dq.end());
```

Complexity: **O(N log N)**

---

## 🔄 Reverse

```cpp
reverse(dq.begin(), dq.end());
```

---

## 🔢 Count

```cpp
count(dq.begin(), dq.end(), 3);
```

Counts occurrences of 3.

---

## 🔍 Find

```cpp
find(dq.begin(), dq.end(), 4);
```

Returns iterator to element.

---

## 📉 Min & Max

```cpp
min_element(...)
max_element(...)
```

---

## ➕ Sum (Accumulate)

```cpp
accumulate(dq.begin(), dq.end(), 0);
```

Requires `<numeric>`.

---

# 🔹 PART 5: Advanced Features

From: `05_advanced_features.cpp`

---

## 🔁 Swap

```cpp
dq1.swap(dq2);
```

Efficient exchange of contents.

---

## 🚀 Emplace Functions

More efficient than push because they construct objects in-place.

```cpp
dq1.emplace_back(100);
dq1.emplace_front(200);
dq1.emplace(dq1.begin() + 1, 300);
```

---

## 📉 shrink_to_fit()

```cpp
dq1.shrink_to_fit();
```

Reduces unused memory.

---

## ⚖ Comparison

```cpp
if (dq1 == dq2)
```

Deque supports:

* `==`
* `!=`
* `<`
* `>`

Lexicographical comparison.

---

# 🔹 PART 6: Real-World Pattern – Sliding Window Maximum

From: `06_real_world_patterns.cpp`

This is a very important competitive programming pattern.

---

## 🧠 Problem Idea

Given array:

```text
1 3 -1 -3 5 3 6 7
```

Window size = 3

Find maximum of every window.

---

## 🔥 Why Deque is Perfect Here?

We need:

* Remove elements from front
* Remove elements from back
* Maintain decreasing order

Deque gives O(N) solution.

---

## 💡 Core Logic

```cpp
while (!dq.empty() && dq.front() <= i - k)
    dq.pop_front();

while (!dq.empty() && arr[dq.back()] < arr[i])
    dq.pop_back();
```

This keeps deque:

* Valid window indices
* Maximum element at front

Time Complexity: **O(N)**

Very powerful technique.

---

# 📊 Time Complexity Summary

| Operation     | Complexity |
| ------------- | ---------- |
| push_front    | O(1)       |
| push_back     | O(1)       |
| pop_front     | O(1)       |
| pop_back      | O(1)       |
| random access | O(1)       |
| insert middle | O(N)       |
| erase middle  | O(N)       |
| sort          | O(N log N) |

---

# 🧠 When Should You Use `deque`?

Use `deque` when:

✔ You need frequent front operations
✔ You implement sliding window
✔ You need double-ended structure
✔ You want queue-like behavior with random access

Avoid if:

* You only need push_back → `vector` is simpler

---

# 🎯 Final Thoughts

`std::deque` is:

* Flexible
* Powerful
* Efficient at both ends
* Essential for sliding window problems

If you master `deque`, you unlock advanced algorithm patterns.

---


# Author

**Engr. Md Monjur Bakth Mazumder**

🎓 Diploma in Computer Science and Technology — [Moulvibazar Polytechnic Institute](https://mpi.moulvibazar.gov.bd/)  
🎓 BSc in Computer Science & Engineering (CSE) (Ongoing) — [Sylhet International University](https://siu.edu.bd/)

📧 Email: monjurmbm404@gmail.com

### ⭐ If you find this helpful, don’t forget to **star** the repository!