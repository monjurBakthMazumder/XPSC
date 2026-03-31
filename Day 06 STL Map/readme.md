# 📘 C++ STL `std::map` — Complete Beginner Guide

`std::map` is one of the most powerful containers in the C++ Standard Library.

It stores data in **key–value pairs** and automatically keeps the keys **sorted**.

Think of it like a **dictionary**:

```text
Key   →   Value
10    →   "Ten"
20    →   "Twenty"
```

In C++:

```cpp
#include <map>
```

---

# 🧠 What is `std::map`?

`std::map` is:

✅ A key–value container  
✅ Keys are **unique**  
✅ Automatically **sorted by key (ascending)**  
✅ Implemented using a **Red-Black Tree**  
✅ Most operations take **O(log n)** time

---

# 🔥 Why Use `map`?

Use `map` when you need:

✔ Fast searching by key
✔ Sorted data automatically
✔ Frequency counting
✔ Dictionary-like structure
✔ Competitive Programming range queries

---

# 📂 Project Structure

```
01_declaration_and_initialization.cpp
02_input_and_output.cpp
03_traversal_methods.cpp
04_insert_and_erase.cpp
05_find_and_search.cpp
06_capacity_and_status.cpp
07_lowerbound_upperbound.cpp
08_custom_sorting_and_greater.cpp
09_real_world_patterns.cpp
10_common_mistakes_and_best_practices.cpp
```

Each file teaches one important concept step-by-step.

---

# 1️⃣ Declaration & Initialization

📄 `01_declaration_and_initialization.cpp`

## Basic Declaration

```cpp
map<int, string> mp;
```

👉 `int` = key
👉 `string` = value

---

## Initialize with Values

```cpp
map<int, string> mp2 = {
    {1, "One"},
    {2, "Two"},
    {3, "Three"}
};
```

---

## Insert Using `[]`

```cpp
mp[10] = "Ten";
```

⚠ Important:
If the key does not exist, it will be created automatically.

---

# 2️⃣ Input & Output

📄 `02_input_and_output.cpp`

```cpp
map<string, int> mp;
mp[name] = age;
```

## Printing a Map

```cpp
for(auto p : mp){
    cout << p.first << " " << p.second << endl;
}
```

✔ `first` → key
✔ `second` → value

Output is always sorted by key.

---

# 3️⃣ Traversal Methods

📄 `03_traversal_methods.cpp`

## ✅ Range-Based Loop (Recommended)

```cpp
for(auto p : mp)
```

---

## ✅ Iterator Method

```cpp
for(auto it = mp.begin(); it != mp.end(); it++)
```

Access:

```cpp
it->first
it->second
```

---

## ✅ Reverse Traversal

```cpp
for(auto it = mp.rbegin(); it != mp.rend(); it++)
```

---

# 4️⃣ Insert & Erase

📄 `04_insert_and_erase.cpp`

## Insert

```cpp
mp.insert({1,100});
mp.emplace(2,200);
```

`emplace()` is slightly faster.

---

## Erase by Key

```cpp
mp.erase(2);
```

---

## Erase by Iterator

```cpp
auto it = mp.find(1);
if(it != mp.end())
    mp.erase(it);
```

---

# 5️⃣ Find & Search

📄 `05_find_and_search.cpp`

## Find a Key

```cpp
auto it = mp.find(20);
```

If not found → returns `mp.end()`

Always check:

```cpp
if(it != mp.end())
```

---

# 6️⃣ Capacity & Status

📄 `06_capacity_and_status.cpp`

## Check Empty

```cpp
mp.empty();
```

---

## Size

```cpp
mp.size();
```

---

## Clear All Data

```cpp
mp.clear();
```

---

# 7️⃣ lower_bound & upper_bound (Very Important 🔥)

📄 `07_lowerbound_upperbound.cpp`

Used in Competitive Programming.

## lower_bound(key)

Returns first element **≥ key**

```cpp
mp.lower_bound(25);
```

---

## upper_bound(key)

Returns first element **> key**

```cpp
mp.upper_bound(30);
```

Both work in **O(log n)** time.

---

# 8️⃣ Custom Sorting (Descending Order)

📄 `08_custom_sorting_and_greater.cpp`

By default → ascending order.

To sort in descending order:

```cpp
map<int, string, greater<int>> mp;
```

Now keys will be sorted from large to small.

---

# 9️⃣ Real-World Patterns

📄 `09_real_world_patterns.cpp`

## Character Frequency Counter

```cpp
map<char,int> freq;

for(char c : s)
    freq[c]++;
```

---

## Word Frequency Counter

```cpp
map<string,int> word;

while(cin >> str)
    word[str]++;
```

---

## Check if Key Exists

```cpp
if(mp.count(10))
```

`count()` returns:

- 1 → exists
- 0 → does not exist

---

# 🔟 Common Mistakes & Best Practices

📄 `10_common_mistakes_and_best_practices.cpp`

---

## ❌ Mistake 1

```cpp
mp[100];
```

This creates a new key automatically.

---

## ✅ Safe Check

```cpp
if(mp.find(100) != mp.end())
```

---

## ❌ Mistake 2

```cpp
for(int i=0;i<mp.size();i++)
```

Map is NOT index-based.

Use range loop instead.

---

# 📊 Time Complexity

| Operation   | Complexity |
| ----------- | ---------- |
| Insert      | O(log n)   |
| Erase       | O(log n)   |
| Find        | O(log n)   |
| lower_bound | O(log n)   |
| Traversal   | O(n)       |

---

# ⚔ map vs unordered_map

| Feature          | map            | unordered_map |
| ---------------- | -------------- | ------------- |
| Sorted           | ✅ Yes         | ❌ No         |
| Structure        | Red-Black Tree | Hash Table    |
| Average Speed    | O(log n)       | O(1)          |
| Order maintained | Yes            | No            |

Use:

🔹 `map` → when sorted order is required  
🔹 `unordered_map` → when fastest lookup is required

---

# 🎯 When Should You Use `map`?

✅ Frequency counting  
✅ Dictionary problems  
✅ Ordered data storage  
✅ Range queries  
✅ Competitive Programming  
✅ Data grouping

---

# 🧠 Beginner Tips

✔ Always check using `find()` before accessing  
✔ Use `auto` for cleaner code  
✔ Prefer `emplace()` over `insert()`  
✔ Remember: keys must be unique  
✔ Learn `lower_bound()` and `upper_bound()` well

---

# 🚀 Final Summary

`std::map` is:

> 🔹 Sorted key-value container  
> 🔹 Logarithmic time operations  
> 🔹 Essential for CP & Interviews  
> 🔹 Very safe and powerful

If you master `map`, you unlock:

✔ Efficient searching  
✔ Range-based problems  
✔ Frequency counting  
✔ Ordered data management

---


# Author

**Engr. Md Monjur Bakth Mazumder**

🎓 Diploma in Computer Technology — [Moulvibazar Polytechnic Institute](https://mpi.moulvibazar.gov.bd/)  
🎓 BSc in CSE (Running) — [Sylhet International University](https://siu.edu.bd/)

📧 Email: monjurmbm404@gmail.com

### ⭐ If you find this helpful, don’t forget to **star** the repository!