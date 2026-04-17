# 📘 C++ STL `std::priority_queue` — Beginner Friendly Guide

`std::priority_queue` is a container from the **C++ Standard Template Library (STL)** that always keeps the **highest priority element on top**.

To use it in C++:

```cpp
#include <queue>
```

Think of it like a **special queue where the most important element is served first**.

---

# 🧠 What is `std::priority_queue`?

A **priority queue** stores elements in such a way that:

- The **highest priority element is always at the top**
- You can quickly access it using `top()`

By default:

👉 `priority_queue` works as a **Max Heap**

Meaning:

```text
Largest element comes first
```

Example:

```cpp
priority_queue<int> pq;

pq.push(10);
pq.push(30);
pq.push(20);
```

If we remove elements:

```
30 20 10
```

The **largest element is always removed first**.

---

# ⚡ Main Characteristics (Boisisto)

| Feature        | Description      |
| -------------- | ---------------- |
| Data Structure | Heap             |
| Default Type   | Max Heap         |
| Access Top     | O(1)             |
| Insert (push)  | O(log n)         |
| Remove (pop)   | O(log n)         |
| Internal Order | Not fully sorted |

Important:

Even though the container isn't fully sorted internally, **popping repeatedly gives sorted order**.

---

# ⚡ Time Complexity

| Operation | Complexity |
| --------- | ---------- |
| push      | O(log n)   |
| pop       | O(log n)   |
| top       | O(1)       |
| size      | O(1)       |
| empty     | O(1)       |

---

# 📂 Project File Structure

This project teaches `priority_queue` step-by-step.

```
01_declaration_and_initialization.cpp
02_input_and_output.cpp
03_basic_operations.cpp
04_max_heap_default.cpp
05_min_heap_custom.cpp
06_sorted_output.cpp
07_priority_queue_with_pair.cpp
08_custom_comparator.cpp
09_real_world_patterns.cpp
10_common_mistakes_and_best_practices.cpp
```

Each file explains one important concept.

---

# 1️⃣ Declaration and Initialization

📄 `01_declaration_and_initialization.cpp`

Declare a priority queue:

```cpp
priority_queue<int> pq;
```

Insert elements:

```cpp
pq.push(10);
pq.push(30);
pq.push(20);
```

Access the top element:

```cpp
cout << pq.top();
```

Output:

```
30
```

Because **30 is the largest element**.

You can also initialize using a vector:

```cpp
vector<int> v = {5,1,9,3};

priority_queue<int> pq2(v.begin(), v.end());
```

---

# 2️⃣ Input and Output

📄 `02_input_and_output.cpp`

Example:

```cpp
priority_queue<int> pq;

int n;
cin >> n;

for(int i=0;i<n;i++){
    int x;
    cin >> x;
    pq.push(x);
}
```

Print elements:

```cpp
while(!pq.empty()){
    cout << pq.top() << " ";
    pq.pop();
}
```

Output will be **largest to smallest**.

---

# 3️⃣ Basic Operations

📄 `03_basic_operations.cpp`

Important functions:

### Insert element

```cpp
pq.push(10);
```

### Access top element

```cpp
pq.top();
```

### Remove top element

```cpp
pq.pop();
```

### Size of queue

```cpp
pq.size();
```

### Check if empty

```cpp
pq.empty();
```

---

# 4️⃣ Max Heap (Default Behavior)

📄 `04_max_heap_default.cpp`

By default, `priority_queue` behaves like a **Max Heap**.

Example:

```cpp
priority_queue<int> pq;

pq.push(5);
pq.push(1);
pq.push(10);
pq.push(3);
```

Output after popping:

```
10 5 3 1
```

Largest element always comes first.

---

# 5️⃣ Min Heap (Custom Priority Queue)

📄 `05_min_heap_custom.cpp`

Sometimes we need the **smallest element first**.

To create a **Min Heap**:

```cpp
priority_queue<int, vector<int>, greater<int>> pq;
```

Example:

```cpp
pq.push(5);
pq.push(1);
pq.push(10);
pq.push(3);
```

Output:

```
1 3 5 10
```

Now the **smallest element appears first**.

---

# 6️⃣ Sorted Output

📄 `06_sorted_output.cpp`

If you keep popping elements from a priority queue, you get a **sorted sequence**.

Example:

```cpp
int arr[] = {7,2,9,4,1};

for(int x : arr)
    pq.push(x);
```

Output after popping:

```
9 7 4 2 1
```

This is **descending sorted order**.

---

# 7️⃣ Priority Queue with `pair`

📄 `07_priority_queue_with_pair.cpp`

Priority queues can also store **pairs**.

Example:

```cpp
priority_queue<pair<int,int>> pq;

pq.push({5,1});
pq.push({10,2});
pq.push({7,3});
```

Output:

```
10 2
7 3
5 1
```

Pairs are sorted based on the **first value**.

This is commonly used in:

- **Graph algorithms**
- **Dijkstra's algorithm**

---

# 8️⃣ Custom Comparator

📄 `08_custom_comparator.cpp`

You can create your own comparison rule.

Example:

```cpp
struct Compare
{
    bool operator()(int a, int b)
    {
        return a > b;
    }
};
```

Then use it:

```cpp
priority_queue<int, vector<int>, Compare> pq;
```

This allows **custom sorting behavior**.

---

# 9️⃣ Real World Patterns

📄 `09_real_world_patterns.cpp`

Example problem:

### Find the largest 3 numbers

```cpp
vector<int> arr = {5,1,9,3,7};

priority_queue<int> pq;

for(int x : arr)
    pq.push(x);
```

Output:

```
9 7 5
```

Common uses of priority queues:

- Graph algorithms (Dijkstra)
- K largest elements
- Task scheduling
- Event simulation
- Median problems

---

# 🔟 Common Mistakes and Best Practices

📄 `10_common_mistakes_and_best_practices.cpp`

### ❌ Accessing empty queue

```cpp
pq.top();
```

If the queue is empty, this causes an error.

Always check:

```cpp
if(!pq.empty())
    cout << pq.top();
```

---

# 📊 Summary

| Operation | Complexity |
| --------- | ---------- |
| push      | O(log n)   |
| pop       | O(log n)   |
| top       | O(1)       |
| size      | O(1)       |
| empty     | O(1)       |

---

# 🧠 When Should You Use `priority_queue`?

Use it when you need:

✔ Fast access to **largest element**
✔ Fast access to **smallest element (min heap)**
✔ Task scheduling problems
✔ Graph algorithms like **Dijkstra**
✔ Finding **K largest / smallest elements**

---

# 🚀 Final Summary

`std::priority_queue` is a powerful STL container that provides:

✅ Fast access to highest priority element  
✅ Efficient heap structure  
✅ Logarithmic insert and delete  
✅ Useful in many algorithms

It is widely used in:

- Competitive Programming
- Graph Algorithms
- Scheduling Systems
- Optimization Problems

---


# Author

**Engr. Md Monjur Bakth Mazumder**

🎓 Diploma in Computer Science and Technology — [Moulvibazar Polytechnic Institute](https://mpi.moulvibazar.gov.bd/)  
🎓 BSc in Computer Science & Engineering (CSE) (Ongoing) — [Sylhet International University](https://siu.edu.bd/)

📧 Email: monjurmbm404@gmail.com

### ⭐ If you find this helpful, don’t forget to **star** the repository!
