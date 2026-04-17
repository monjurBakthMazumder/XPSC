# 📘 C++ STL – `std::string` (Complete Beginner Guide)

Welcome to the **C++ String Mastery Repository** 🚀

This repository is a **step-by-step beginner-friendly guide** to mastering `std::string` in C++.
You will learn everything from **creating strings** to **modifying, searching, parsing, and using STL algorithms** with strings.

If you understand this repository completely, you will be confident handling **text processing**, which is one of the most important skills in programming.

---

# 🧠 What is `std::string`?

`std::string` is a **dynamic sequence of characters** provided by the C++ Standard Library.

It is much safer and easier than traditional C-style character arrays (`char[]`).

✅ Dynamic size
✅ Built-in functions
✅ Easy manipulation
✅ STL compatible

---

# 📂 Project Structure

| File                                | Topic                            |
| ----------------------------------- | -------------------------------- |
| `01_declaration_and_memory.cpp`     | String creation & initialization |
| `02_input_output.cpp`               | Taking input & printing          |
| `03_access_and_iteration.cpp`       | Accessing characters             |
| `04_modification_push_pop.cpp`      | Editing strings                  |
| `05_capacity_and_status.cpp`        | Size & memory                    |
| `06_substring_and_search.cpp`       | Search & substring               |
| `07_compare_and_convert.cpp`        | Compare & type conversion        |
| `08_stl_algorithms_with_string.cpp` | STL algorithms                   |
| `09_stringstream_and_parsing.cpp`   | Parsing text                     |

---

# 🔹 1. Declaration & Memory Basics

From: `01_declaration_and_memory.cpp`

---

## ✅ Different Ways to Create Strings

```cpp
string s1;
string s2 = "Hello";
string s3("World");
string s4(5, 'A');
string s5 = s2;
```

### 🧠 Explanation

| Method      | Meaning               |
| ----------- | --------------------- |
| Empty       | Creates blank string  |
| Direct init | Normal assignment     |
| Constructor | Object-style creation |
| Repeat char | Creates `"AAAAA"`     |
| Copy        | Duplicate string      |

---

# 🔹 2. Input & Output

From: `02_input_output.cpp`

---

## 📥 Single Word Input

```cpp
cin >> name;
```

Stops at space.

---

## 📄 Full Line Input

```cpp
getline(cin, name);
```

Reads entire sentence including spaces.

⚠ Important:

```cpp
cin.ignore();
```

Used to remove leftover newline from previous input.

---

# 🔹 3. Accessing Characters & Iteration

From: `03_access_and_iteration.cpp`

---

## 📌 Access Methods

```cpp
s[0];
s.at(2);
s.front();
s.back();
```

| Function  | Description     |
| --------- | --------------- |
| `[]`      | Fast access     |
| `at()`    | Safe access     |
| `front()` | First character |
| `back()`  | Last character  |

---

## 🔁 Iteration

```cpp
for(char c : s)
    cout << c;
```

Modern and clean loop.

---

# 🔹 4. String Modification

From: `04_modification_push_pop.cpp`

---

## ➕ Add Characters

```cpp
s.push_back('!');
s.append(" World");
s += "!!!";
```

---

## ➖ Remove Characters

```cpp
s.pop_back();
```

---

## 📌 Insert / Erase / Replace

```cpp
s.insert(5, " C++");
s.erase(5, 4);
s.replace(0, 5, "Hi");
```

Very useful for editing text dynamically.

---

# 🔹 5. Capacity & Status

From: `05_capacity_and_status.cpp`

---

## 📏 Size

```cpp
s.size();
s.length();
```

Both are identical.

---

## 💾 Capacity

```cpp
s.capacity();
```

Shows allocated memory size.

---

## ✅ Check Empty

```cpp
s.empty();
```

Returns:

* `true`
* `false`

---

## 🧹 Clear String

```cpp
s.clear();
```

Removes all characters.

---

# 🔹 6. Substring & Searching

From: `06_substring_and_search.cpp`

---

## ✂ Substring

```cpp
s.substr(start, length);
```

Example:

```cpp
s.substr(6, 11);
```

---

## 🔍 Searching

```cpp
s.find("Pro");
s.rfind("g");
```

| Function  | Meaning          |
| --------- | ---------------- |
| `find()`  | First occurrence |
| `rfind()` | Last occurrence  |

---

## ✅ Check Existence

```cpp
if(s.find("Hello") != string::npos)
```

`npos` means **not found**.

---

# 🔹 7. Compare & Conversion

From: `07_compare_and_convert.cpp`

---

## ⚖ Compare Strings

```cpp
a == b;
a.compare(b);
```

`compare()` returns:

| Result | Meaning |
| ------ | ------- |
| 0      | Equal   |
| <0     | Smaller |
| >0     | Greater |

---

## 🔄 Type Conversion

### Number → String

```cpp
to_string(100);
```

### String → Number

```cpp
stoi("123");
stod("3.14");
```

Very useful in competitive programming.

---

# 🔹 8. STL Algorithms with String

From: `08_stl_algorithms_with_string.cpp`

Strings work perfectly with STL algorithms.

---

## 🔃 Sort

```cpp
sort(s.begin(), s.end());
```

---

## 🔄 Reverse

```cpp
reverse(s.begin(), s.end());
```

---

## 🔢 Count Characters

```cpp
count(s.begin(), s.end(), 'u');
```

---

## 🔠 Convert Case

```cpp
transform(s.begin(), s.end(), s.begin(), ::toupper);
```

---

# 🔹 9. StringStream & Parsing

From: `09_stringstream_and_parsing.cpp`

---

## 🧩 What is `stringstream`?

Used to **break sentences into words**.

---

## Example

```cpp
stringstream ss(sentence);
```

Extract words:

```cpp
while(ss >> word)
```

Output:

```
I
love
C++
STL
```

Perfect for:

* Word counting
* Tokenizing
* Parsing input

---

# 📊 Complexity Overview

| Operation | Complexity |
| --------- | ---------- |
| Access    | O(1)       |
| push_back | O(1)       |
| insert    | O(N)       |
| erase     | O(N)       |
| find      | O(N)       |
| substr    | O(N)       |
| sort      | O(N log N) |

---

# 🎯 When to Use `std::string`

Use strings when you need:

✅ Text processing
✅ Input parsing
✅ Searching words
✅ Formatting output
✅ Competitive programming problems

---

# 🚀 Final Thoughts

`std::string` is one of the **most important STL containers**.

Mastering it allows you to:

* Manipulate text easily
* Solve parsing problems
* Work efficiently with STL algorithms

Understanding strings deeply will greatly improve your **problem-solving skills**.

---


# Author

**Engr. Md Monjur Bakth Mazumder**

🎓 Diploma in Computer Science and Technology — [Moulvibazar Polytechnic Institute](https://mpi.moulvibazar.gov.bd/)  
🎓 BSc in Computer Science & Engineering (CSE) (Ongoing) — [Sylhet International University](https://siu.edu.bd/)

📧 Email: monjurmbm404@gmail.com

### ⭐ If you find this helpful, don’t forget to **star** the repository!