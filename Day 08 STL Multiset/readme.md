

# 📘 C++ STL `std::multiset` — Beginner Friendly Guide

`std::multiset` is a container from the **C++ Standard Template Library (STL)** that stores elements in **sorted order** and **allows duplicate values**.

To use it in C++:

```cpp
#include <set>
```

Even though it is called **multiset**, it is included in the same `<set>` library.

---

# 🧠 What is `std::multiset`?

A **multiset** is very similar to `set`, but it **allows multiple duplicate elements**.

Example:

```cpp
multiset<int> ms;

ms.insert(10);
ms.insert(10);
ms.insert(5);
ms.insert(20);
```

Output:

```
5 10 10 20
```

Notice:

* elements are **sorted automatically**
* **duplicates are allowed**

---

# ⚡ Main Characteristics (Boisisto)

| Feature           | Description                                   |
| ----------------- | --------------------------------------------- |
| Sorted            | Elements are always stored in ascending order |
| Duplicate Allowed | Same value can appear multiple times          |
| Data Structure    | Implemented using **Red-Black Tree**          |
| Fast Searching    | Logarithmic time operations                   |

---

# ⚡ Time Complexity

Most operations in `multiset` are **O(log n)**.

| Operation   | Complexity |
| ----------- | ---------- |
| insert      | O(log n)   |
| erase       | O(log n)   |
| find        | O(log n)   |
| lower_bound | O(log n)   |
| upper_bound | O(log n)   |
| traversal   | O(n)       |

Because it uses a **balanced binary tree**, searching and insertion remain fast even for large data.

---

# 📂 Project File Structure

This repository explains `multiset` step-by-step.

```
01_declaration_and_initialization.cpp
02_input_and_output.cpp
03_traversal_methods.cpp
04_insert_and_erase.cpp
05_find_and_count.cpp
06_capacity_functions.cpp
07_lowerbound_upperbound.cpp
08_reverse_traversal.cpp
09_real_world_patterns.cpp
10_common_mistakes_and_best_practices.cpp
```

Each file teaches **one important concept**.

---

# 1️⃣ Declaration and Initialization

📄 `01_declaration_and_initialization.cpp`

Declare a multiset:

```cpp
multiset<int> ms;
```

Insert elements:

```cpp
ms.insert(10);
ms.insert(10);
ms.insert(20);
ms.insert(5);
```

Output:

```
5 10 10 20
```

Initialize directly:

```cpp
multiset<int> ms2 = {4,1,3,2,2,5};
```

Output:

```
1 2 2 3 4 5
```

Notice duplicates are **not removed**.

---

# 2️⃣ Input and Output

📄 `02_input_and_output.cpp`

Take input from the user:

```cpp
int n;
cin >> n;

multiset<int> ms;

for(int i=0;i<n;i++){
    int x;
    cin >> x;
    ms.insert(x);
}
```

Print values:

```cpp
for(int x : ms)
    cout << x << " ";
```

Output will be **sorted automatically**.

---

# 3️⃣ Traversal Methods

📄 `03_traversal_methods.cpp`

### Range-based loop (recommended)

```cpp
for(int x : ms)
    cout << x << " ";
```

---

### Iterator traversal

```cpp
for(auto it = ms.begin(); it != ms.end(); it++)
    cout << *it << " ";
```

Here `*it` accesses the value stored in the multiset.

---

# 4️⃣ Insert and Erase

📄 `04_insert_and_erase.cpp`

Insert values:

```cpp
ms.insert(10);
ms.insert(10);
ms.insert(20);
```

Erase values:

```cpp
ms.erase(10);
```

Important:

```
erase(value) removes ALL occurrences
```

Example:

```
10 10 20
```

After:

```
20
```

---

# 5️⃣ Find and Count

📄 `05_find_and_count.cpp`

### Find an element

```cpp
auto it = ms.find(10);
```

Check if found:

```cpp
if(it != ms.end())
    cout << "Found";
```

---

### Count duplicates

```cpp
ms.count(10)
```

Example:

```
10 10 10 20
```

Result:

```
count(10) = 3
```

This is very useful for **frequency counting**.

---

# 6️⃣ Capacity Functions

📄 `06_capacity_functions.cpp`

Check if multiset is empty:

```cpp
ms.empty();
```

Get number of elements:

```cpp
ms.size();
```

Remove all elements:

```cpp
ms.clear();
```

Example:

```
Size: 3
After clear: 0
```

---

# 7️⃣ lower_bound and upper_bound

📄 `07_lowerbound_upperbound.cpp`

These functions are very important in **competitive programming**.

Example multiset:

```
{10,20,20,30,40}
```

### lower_bound(x)

Returns first element **greater than or equal to x**

```cpp
auto lb = ms.lower_bound(20);
```

Result:

```
20
```

---

### upper_bound(x)

Returns first element **greater than x**

```cpp
auto ub = ms.upper_bound(20);
```

Result:

```
30
```

---

# 8️⃣ Reverse Traversal

📄 `08_reverse_traversal.cpp`

Traverse from **largest to smallest**.

```cpp
for(auto it = ms.rbegin(); it != ms.rend(); it++)
    cout << *it << " ";
```

Example output:

```
30 20 10 10
```

---

# 9️⃣ Real World Patterns

📄 `09_real_world_patterns.cpp`

### Store sorted numbers with duplicates

Example array:

```
5 3 2 5 6 3 7 8
```

Insert into multiset:

```cpp
multiset<int> ms;

for(int x : arr)
    ms.insert(x);
```

Output:

```
2 3 3 5 5 6 7 8
```

---

### Count frequency of a number

```cpp
ms.count(5);
```

Output:

```
2
```

---

# 🔟 Common Mistakes and Best Practices

📄 `10_common_mistakes_and_best_practices.cpp`

### ❌ Mistake: expecting unique values

```
multiset<int> ms = {1,2,2,3};
```

Output:

```
1 2 2 3
```

Duplicates are allowed.

---

### Erase only ONE occurrence

To erase one element:

```cpp
auto it = ms.find(2);

if(it != ms.end())
    ms.erase(it);
```

This removes **only one 2**.

---

# 📊 `set` vs `multiset`

| Feature            | set            | multiset       |
| ------------------ | -------------- | -------------- |
| Duplicate elements | ❌ Not allowed  | ✅ Allowed      |
| Sorted order       | ✅ Yes          | ✅ Yes          |
| Structure          | Red-Black Tree | Red-Black Tree |
| Complexity         | O(log n)       | O(log n)       |

Example:

```
Input: 1 2 2 3
```

Set:

```
1 2 3
```

Multiset:

```
1 2 2 3
```

---

# 🧠 When Should You Use `multiset`?

Use `multiset` when you need:

✔ Sorted data
✔ Duplicate elements
✔ Frequency counting
✔ Fast searching
✔ Order based queries

Common use cases:

* Frequency tracking
* Competitive programming
* Median problems
* Priority like structures
* Handling duplicate values

---

# 🚀 Final Summary

`std::multiset` is a powerful container that provides:

✅ Automatic sorting   
✅ Duplicate elements allowed   
✅ Fast logarithmic operations   
✅ Easy frequency counting   

It is widely used in:

* Competitive Programming
* Algorithm problems
* Sorted duplicate data handling

---
 

# Author

**Md Monjur Bakth Mazumder**  
**Software Engineer | Lead Frontend Developer**

Software Engineer & Lead Frontend Developer at [Qrinux](https://www.qrinux.com/)  
Software Engineer & Lead Frontend Developer at [Boom Box E-Solutions](https://www.boomboxesolutions.com/)

📧 [Email me](mailto:md.monjurmbm2001@gmail.com)  
🌐 [Portfolio](https://mdmonjurbakthmazumder.netlify.app)

Passionate about building clean, maintainable, and scalable applications