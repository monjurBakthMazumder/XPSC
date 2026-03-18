# 📘 C++ STL Nested Structures — Beginner Friendly Guide

In **C++ STL**, we can store **containers inside other containers**.
This is called a **Nested Structure**.

It helps organize **complex or multi-dimensional data**.

Example:

```cpp
vector<pair<int,int>>
vector<vector<int>>
map<int, vector<int>>
set<pair<int,int>>
priority_queue<pair<int,int>>
```

These structures are heavily used in:

- Competitive Programming
- Graph Algorithms
- Grid Problems
- Data Organization
- Real-world systems

---

# 🧠 What is a Nested Structure?

A **Nested Structure** means:

> A container that stores another container or structured object.

Example:

```cpp
vector<pair<int,int>>
```

Here:

- `vector` is the outer container
- `pair<int,int>` is the inner structure

Another example:

```cpp
map<int, vector<int>>
```

Here:

- `map` stores keys
- each key stores a **vector of values**

This allows storing **grouped or structured data**.

---

# 📂 Project File Structure

This project explains nested STL step-by-step.

```
01_pair_basics.cpp
02_tuple_basics.cpp
03_vector_of_pairs.cpp
04_vector_of_vector.cpp
05_map_of_vector.cpp
06_set_of_pairs.cpp
07_multiset_of_pairs.cpp
08_priority_queue_of_pairs.cpp
09_complex_nested_structures.cpp
10_real_world_patterns.cpp
```

Each file focuses on one important concept.

---

# 1️⃣ Pair Basics

📄 `01_pair_basics.cpp`

A **pair** stores **two values together**.

```cpp
pair<int,string> p;

p.first = 10;
p.second = "Hello";
```

Access values:

```cpp
cout << p.first;
cout << p.second;
```

Example output:

```
10 Hello
```

Pairs are useful when we need to store **two related values**.

Examples:

- `(x, y)` coordinates
- `(score, student_id)`
- `(weight, node)`

---

# 2️⃣ Tuple Basics

📄 `02_tuple_basics.cpp`

A **tuple** can store **multiple values** (more than two).

Example:

```cpp
tuple<int,string,double> t;

t = make_tuple(1,"C++",3.14);
```

Access values:

```cpp
get<0>(t)
get<1>(t)
get<2>(t)
```

Output:

```
1
C++
3.14
```

Use tuples when you need **3 or more values together**.

---

# 3️⃣ Vector of Pairs

📄 `03_vector_of_pairs.cpp`

A **vector of pairs** stores multiple pairs.

```cpp
vector<pair<int,int>> vp;
```

Example:

```cpp
vp.push_back({1,2});
vp.push_back({3,4});
vp.push_back({5,6});
```

Traversal:

```cpp
for(auto p : vp)
    cout << p.first << " " << p.second << endl;
```

Output:

```
1 2
3 4
5 6
```

Common uses:

- coordinates
- edges in graphs
- storing two related values

---

# 4️⃣ Vector of Vector (2D Vector)

📄 `04_vector_of_vector.cpp`

A **vector of vector** creates a **2D structure (matrix)**.

Example:

```cpp
vector<vector<int>> grid = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
```

Traversal:

```cpp
for(auto row : grid){
    for(int x : row)
        cout << x << " ";
}
```

Output:

```
1 2 3
4 5 6
7 8 9
```

Common uses:

- matrices
- grids
- game boards
- DP tables

---

# 5️⃣ Map of Vector

📄 `05_map_of_vector.cpp`

A **map of vector** stores **a list of values for each key**.

Example:

```cpp
map<int, vector<int>> graph;
```

Insert values:

```cpp
graph[1].push_back(2);
graph[1].push_back(3);
graph[2].push_back(4);
```

Output:

```
1: 2 3
2: 4
```

This structure is widely used for:

- **Graph adjacency list**
- grouped data

---

# 6️⃣ Set of Pairs

📄 `06_set_of_pairs.cpp`

A **set of pairs** stores unique pairs in sorted order.

Example:

```cpp
set<pair<int,int>> s;

s.insert({2,3});
s.insert({1,5});
s.insert({2,3});
```

Output:

```
1 5
2 3
```

Duplicates are automatically removed.

Common use:

- storing unique coordinates
- unique edge pairs

---

# 7️⃣ Multiset of Pairs

📄 `07_multiset_of_pairs.cpp`

Unlike `set`, **multiset allows duplicates**.

Example:

```cpp
multiset<pair<int,int>> ms;

ms.insert({1,2});
ms.insert({1,2});
ms.insert({3,4});
```

Output:

```
1 2
1 2
3 4
```

Useful when **duplicate entries are required**.

---

# 8️⃣ Priority Queue of Pairs

📄 `08_priority_queue_of_pairs.cpp`

A **priority queue can store pairs**.

Example:

```cpp
priority_queue<pair<int,int>> pq;
```

Insert elements:

```cpp
pq.push({10,1});
pq.push({5,2});
pq.push({20,3});
```

Output:

```
20 3
10 1
5 2
```

Pairs are sorted by **first value by default**.

This structure is heavily used in:

- **Dijkstra Algorithm**
- Graph problems

---

# 9️⃣ Complex Nested Structures

📄 `09_complex_nested_structures.cpp`

Sometimes we combine **multiple containers together**.

Example:

```cpp
map<int, vector<pair<int,int>>> graph;
```

Meaning:

```
node → list of (neighbor, weight)
```

Example data:

```
1: (2,5) (3,7)
2: (4,2)
```

This structure is commonly used in **weighted graphs**.

---

# 🔟 Real World Pattern

📄 `10_real_world_patterns.cpp`

Example: sorting students by marks.

```cpp
vector<pair<int,int>> students = {
    {90,1},
    {85,2},
    {92,3},
    {80,4}
};
```

Sort:

```cpp
sort(students.begin(), students.end());
```

Output:

```
80 4
85 2
90 1
92 3
```

This sorts based on **first value (marks)**.

---

# 🧠 Most Common Nested STL Structures

| Structure                       | Use Case             |
| ------------------------------- | -------------------- |
| `vector<pair<int,int>>`         | coordinates          |
| `vector<vector<int>>`           | matrix / grid        |
| `map<int, vector<int>>`         | graph adjacency list |
| `set<pair<int,int>>`            | unique coordinates   |
| `priority_queue<pair<int,int>>` | Dijkstra algorithm   |
| `vector<tuple<int,int,int>>`    | multi-value data     |

---

# 🚀 Real Competitive Programming Usage

Nested STL containers are heavily used in:

- Graph Algorithms
- BFS / DFS
- Dijkstra Algorithm
- Grid problems
- Scheduling
- Complex data structures

---

# 📚 Final Summary

Nested STL structures allow you to store **complex relationships between data**.

They are extremely useful when working with:

- Graphs
- Multi-dimensional data
- Advanced algorithms
- Competitive programming problems

Mastering these structures will make solving **complex problems much easier**.

---


# Author

**Engr. Md Monjur Bakth Mazumder**

🎓 Diploma in Computer Technology — [Moulvibazar Polytechnic Institute](https://mpi.moulvibazar.gov.bd/)  
🎓 BSc in CSE (Running) — [Sylhet International University](https://siu.edu.bd/)

📧 Email: monjurmbm404@gmail.com

### ⭐ If you find this helpful, don’t forget to **star** the repository!
