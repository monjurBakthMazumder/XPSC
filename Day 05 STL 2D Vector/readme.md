# 📘 C++ STL 2D Vector (Matrix) — Complete Beginner Guide

The **2D Vector** in C++ is one of the most important data structures used to store data in **row and column format**, similar to a **matrix** or **table**.

It is basically:

```cpp
vector<vector<int>>
```

Which means →
👉 A **vector containing multiple vectors**

You can imagine it like:

```
Row → [1 2 3]
Row → [4 5 6]
Row → [7 8 9]
```

---

## ✅ Why Use 2D Vector?

✔ Dynamic size (can grow anytime)
✔ Easy memory management
✔ STL supported functions
✔ Perfect for Matrix, Grid, Graph, DP problems
✔ Safer than traditional arrays

---

# 📂 Project Structure

```
01_declaration_and_initialization.cpp
02_input_output.cpp
03_access_and_iteration.cpp
04_dynamic_resize_and_management.cpp
05_insertion_and_deletion.cpp
06_stl_operations.cpp
07_jagged_array.cpp
08_pass_2d_vector_to_function.cpp
```

---

# 01️⃣ Declaration & Initialization

📄 **File:** `01_declaration_and_initialization.cpp`

## Different Ways to Create 2D Vector

### ✅ Empty 2D Vector

```cpp
vector<vector<int>> v;
```

---

### ✅ Fixed Size Matrix (3 × 4)

```cpp
vector<vector<int>> grid(3, vector<int>(4));
```

Creates:

```
0 0 0 0
0 0 0 0
0 0 0 0
```

---

### ✅ Initialize With Value

```cpp
vector<vector<int>> matrix(3, vector<int>(4, 5));
```

Output:

```
5 5 5 5
5 5 5 5
5 5 5 5
```

---

### ✅ Direct Initialization

```cpp
vector<vector<int>> arr = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
```

---

# 02️⃣ Input & Output

📄 **File:** `02_input_output.cpp`

### Taking Matrix Input

```cpp
cin >> n >> m;
vector<vector<int>> v(n, vector<int>(m));
```

### Input Loop

```cpp
for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
        cin >> v[i][j];
```

### Output Loop

```cpp
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
        cout << v[i][j] << " ";
}
```

---

# 03️⃣ Access & Iteration

📄 **File:** `03_access_and_iteration.cpp`

## Access Element

```cpp
v[row][column]
```

Example:

```cpp
cout << v[0][1];
```

---

## Range-Based Loop (Recommended ✅)

```cpp
for(auto row : v){
    for(auto val : row)
        cout << val;
}
```

✔ Cleaner
✔ Beginner friendly
✔ Less error-prone

---

# 04️⃣ Dynamic Resize & Management

📄 **File:** `04_dynamic_resize_and_management.cpp`

## Resize Rows

```cpp
v.resize(rows);
```

## Resize Columns

```cpp
v[i].resize(cols);
```

---

## Add New Row Dynamically

```cpp
v.push_back({10,20,30});
```

Very useful when matrix size is unknown.

---

# 05️⃣ Insertion & Deletion

📄 **File:** `05_insertion_and_deletion.cpp`

### Add Row

```cpp
v.push_back({5,6});
```

---

### Remove Last Row

```cpp
v.pop_back();
```

---

### Insert Row at Position

```cpp
v.insert(v.begin()+1, {9,9});
```

---

### Delete Row

```cpp
v.erase(v.begin());
```

---

# 06️⃣ STL Operations

📄 **File:** `06_stl_operations.cpp`

## Sort Each Row

```cpp
for(auto &row : v)
    sort(row.begin(), row.end());
```

---

## Reverse Rows

```cpp
reverse(v.begin(), v.end());
```

Powerful STL algorithms work perfectly with 2D vectors.

---

# 07️⃣ Jagged Array (Irregular Matrix)

📄 **File:** `07_jagged_array.cpp`

A **Jagged Array** means rows can have different sizes.

Example:

```
1 2
3 4 5
6
```

Creation:

```cpp
jagged.push_back({1,2});
jagged.push_back({3,4,5});
jagged.push_back({6});
```

✅ Very useful in Graph & Competitive Programming.

---

# 08️⃣ Passing 2D Vector to Function

📄 **File:** `08_pass_2d_vector_to_function.cpp`

## Best Practice ✅ (Pass by Reference)

```cpp
void print(vector<vector<int>> &v)
```

### Why Reference (`&`)?

✔ Avoids copying
✔ Faster execution
✔ Saves memory

---

# 🧠 Time Complexity Summary

| Operation      | Complexity     |
| -------------- | -------------- |
| Access element | O(1)           |
| push_back row  | O(1) amortized |
| insert row     | O(n)           |
| erase row      | O(n)           |
| resize         | O(n × m)       |
| traversal      | O(n × m)       |

---

# ⚡ When Should You Use 2D Vector?

✅ Matrix problems
✅ Grid traversal
✅ BFS / DFS
✅ Dynamic Programming
✅ Game boards
✅ Image processing
✅ Graph adjacency list

---

# 🚀 Beginner Tips

✅ Prefer `vector` over array
✅ Use range loops
✅ Pass by reference in functions
✅ Avoid unnecessary resizing
✅ Learn STL algorithms (`sort`, `reverse`, etc.)

---

# 🎯 Final Summary

A **2D Vector** is:

> 🔹 Dynamic Matrix
> 🔹 Easy to Manage
> 🔹 STL Compatible
> 🔹 Competitive Programming Essential

Mastering `vector<vector<int>>` will make working with **matrices and grids extremely easy** in C++.

---


# Author

**Engr. Md Monjur Bakth Mazumder**

🎓 Diploma in Computer Science and Technology — [Moulvibazar Polytechnic Institute](https://mpi.moulvibazar.gov.bd/)  
🎓 BSc in Computer Science & Engineering (CSE) (Ongoing) — [Sylhet International University](https://siu.edu.bd/)

📧 Email: monjurmbm404@gmail.com

### ⭐ If you find this helpful, don’t forget to **star** the repository!