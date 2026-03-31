

# 📘 C++ STL `std::set` — Beginner Friendly Guide

`std::set` is a container from the **C++ Standard Template Library (STL)** that stores **unique elements in sorted order**.

Think of it like a **mathematical set**:

```
{1, 3, 5, 7}
```

No duplicates are allowed, and elements stay **automatically sorted**.

To use `set` in C++:

```cpp
#include <set>
```

---

# 🧠 What is `std::set`?

A **set** is a container that:

✅ Stores **unique elements only**  
✅ Automatically keeps elements **sorted (ascending order)**  
✅ Provides **fast searching**  
✅ Internally uses a **Red-Black Tree**  

Example:

```cpp
set<int> s;

s.insert(5);
s.insert(1);
s.insert(3);
s.insert(1); // duplicate ignored
```

Output:

```
1 3 5
```

Even though we inserted `5,1,3`, the set keeps them **sorted**.

---

# ⚡ Time Complexity

Most operations in `set` are **logarithmic time**.

| Operation   | Complexity |
| ----------- | ---------- |
| insert      | O(log n)   |
| erase       | O(log n)   |
| find        | O(log n)   |
| lower_bound | O(log n)   |
| upper_bound | O(log n)   |
| traversal   | O(n)       |

This makes `set` **very efficient for searching and maintaining sorted data**.

---

# 📂 Project Structure

This repository teaches `set` step-by-step.

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

Each file focuses on **one important concept**.

---

# 1️⃣ Declaration and Initialization

📄 `01_declaration_and_initialization.cpp`

First, declare a set:

```cpp
set<int> s;
```

Insert elements:

```cpp
s.insert(10);
s.insert(5);
s.insert(20);
s.insert(10); // duplicate ignored
```

Initialize directly:

```cpp
set<int> s2 = {4,1,7,3,3,2};
```

Output will be:

```
1 2 3 4 7
```

Because:

* duplicates are removed
* elements are automatically sorted

---

# 2️⃣ Input and Output

📄 `02_input_and_output.cpp`

Example:

```cpp
set<int> s;

int n;
cin >> n;

for(int i=0;i<n;i++){
    int x;
    cin >> x;
    s.insert(x);
}
```

Print elements:

```cpp
for(int x : s)
    cout << x << " ";
```

Output:

```
Sorted Unique Elements
```

---

# 3️⃣ Traversal Methods

📄 `03_traversal_methods.cpp`

### Range-based loop (recommended)

```cpp
for(int x : s)
    cout << x << " ";
```

---

### Iterator traversal

```cpp
for(auto it = s.begin(); it != s.end(); it++)
    cout << *it << " ";
```

Here `*it` gives the value stored in the set.

---

# 4️⃣ Insert and Erase

📄 `04_insert_and_erase.cpp`

Insert elements:

```cpp
s.insert(10);
s.insert(20);
s.insert(30);
```

Erase an element:

```cpp
s.erase(20);
```

After erase:

```
10 30
```

---

# 5️⃣ Find and Count

📄 `05_find_and_count.cpp`

### Find element

```cpp
auto it = s.find(10);
```

Check if found:

```cpp
if(it != s.end())
    cout << "Found";
```

---

### Count element

```cpp
s.count(10)
```

Returns:

```
1 → exists
0 → does not exist
```

---

# 6️⃣ Capacity Functions

📄 `06_capacity_functions.cpp`

Check if set is empty:

```cpp
s.empty();
```

Number of elements:

```cpp
s.size();
```

Remove all elements:

```cpp
s.clear();
```

---

# 7️⃣ lower_bound and upper_bound

📄 `07_lowerbound_upperbound.cpp`

These are **very important in competitive programming**.

### lower_bound(key)

Returns the first element **greater than or equal to key**

```cpp
auto lb = s.lower_bound(25);
```

---

### upper_bound(key)

Returns the first element **greater than key**

```cpp
auto ub = s.upper_bound(30);
```

Example set:

```
{10,20,30,40,50}
```

```
lower_bound(25) → 30
upper_bound(30) → 40
```

---

# 8️⃣ Reverse Traversal

📄 `08_reverse_traversal.cpp`

To iterate from **largest to smallest**:

```cpp
for(auto it = s.rbegin(); it != s.rend(); it++)
    cout << *it << " ";
```

Output example:

```
40 30 20 10
```

---

# 9️⃣ Real World Patterns

📄 `09_real_world_patterns.cpp`

### Remove duplicates from array

Example:

```cpp
vector<int> arr = {5,3,2,5,6,3,7,8};

set<int> uniqueNumbers;

for(int x : arr)
    uniqueNumbers.insert(x);
```

Output:

```
2 3 5 6 7 8
```

---

### Check if value exists

```cpp
if(uniqueNumbers.count(6))
    cout << "6 exists";
```

---

# 🔟 Common Mistakes and Best Practices

📄 `10_common_mistakes_and_best_practices.cpp`

### ❌ Mistake: Index access

```cpp
s[0]
```

This is **not allowed** because `set` is **not index based**.

---

### ✅ Correct way

```cpp
for(auto it = s.begin(); it != s.end(); it++)
    cout << *it;
```

---

### Safe erase while iterating

```cpp
for(auto it = s.begin(); it != s.end(); )
{
    if(*it == 2)
        it = s.erase(it);
    else
        it++;
}
```

---

# 🎯 When Should You Use `set`?

Use `set` when you need:

✔ Unique values
✔ Automatic sorting
✔ Fast searching
✔ Removing duplicates
✔ Range queries

---

# 📊 `set` vs `unordered_set`

| Feature   | set      | unordered_set |
| --------- | -------- | ------------- |
| Sorted    | ✅ Yes    | ❌ No          |
| Speed     | O(log n) | O(1) average  |
| Structure | Tree     | Hash Table    |

Use:

* **set** → when sorted order is required
* **unordered_set** → when fastest lookup is required

---

# 🚀 Final Summary

`std::set` is a powerful container that provides:

✅ Unique elements  
✅ Automatic sorting   
✅ Fast searching  
✅ Logarithmic operations 

It is widely used in:

* Competitive Programming
* Duplicate removal
* Searching problems
* Ordered data management

---


# Author

**Engr. Md Monjur Bakth Mazumder**

🎓 Diploma in Computer Technology — [Moulvibazar Polytechnic Institute](https://mpi.moulvibazar.gov.bd/)  
🎓 BSc in CSE (Running) — [Sylhet International University](https://siu.edu.bd/)

📧 Email: monjurmbm404@gmail.com

### ⭐ If you find this helpful, don’t forget to **star** the repository!

