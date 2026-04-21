# 📘 Sliding Window Technique — Beginner Friendly Guide

Welcome to the **Sliding Window** section!
This is one of the most powerful and **must-know techniques** in:

- Competitive Programming 🏆
- Coding Interviews 💼
- Problem Solving 🧠

If you master this, many “hard-looking” problems become **easy and efficient**.

---

# 🧠 What is Sliding Window?

Sliding Window is an **optimized version of Two Pointers**.

👉 Instead of checking every subarray (which is slow),
we maintain a **window (range)** and **slide it** across the array.

---

## 💡 Basic Idea

We use two pointers:

```cpp
int l = 0, r = 0;
```

- `l` → left boundary
- `r` → right boundary

The window is:

```cpp
[l ... r]
```

We:

1. Expand the window → `r++`
2. Shrink the window → `l++`
3. Maintain some condition (sum, size, unique chars, etc.)

---

# 🔥 Why Use Sliding Window?

Without sliding window:

- Checking all subarrays → **O(n²)** ❌

With sliding window:

- Efficient solution → **O(n)** ✅

---

# 📂 File Structure

```
A_Segment_with_Small_Sum.cpp
C_Number_of_Segments_with_Small_Sum.cpp
D_Max_Sum_Subarray_of_size_K.cpp
E_First_negative_in_every_window.cpp
F_Segments_with_Small_Spread.cpp
Longest_Substring_with_K_Uniques.cpp
```

---

# 🧩 Types of Sliding Window

## 1. Fixed Size Window

Window size is constant (like size = k)

Example:

```cpp
[r - l + 1 == k]
```

---

## 2. Variable Size Window

Window expands and shrinks based on condition

Example:

```cpp
while (sum > k) l++;
```

---

# 📁 1. A_Segment_with_Small_Sum.cpp

## 📌 Problem

Find the **maximum length subarray** such that:

```cpp
sum <= k
```

---

## 🧠 Logic

- Expand window → add `v[r]`
- If sum exceeds `k` → shrink from left
- Track maximum length

---

## ✅ Code

```cpp
while (r < n)
{
    sum += v[r];

    if (sum <= k)
        ans = max(ans, r - l + 1);
    else
        sum -= v[l], l++;

    r++;
}
```

---

## 🎯 Key Idea

👉 Maintain a valid window where `sum ≤ k`

---

## ⏱ Complexity

- **O(n)**

---

# 📁 2. C_Number_of_Segments_with_Small_Sum.cpp

## 📌 Problem

Count **total number of subarrays** where:

```cpp
sum <= k
```

---

## 🧠 Trick

If a window `[l...r]` is valid:

👉 Then all subarrays ending at `r` are valid:

```cpp
count = (r - l + 1)
```

---

## ✅ Code

```cpp
if (sum <= k)
    ans += r - l + 1;
```

---

## 🔥 Why This Works?

Because:

```
[l...r]
[l+1...r]
[l+2...r]
...
[r...r]
```

All are valid!

---

## ⏱ Complexity

- **O(n)**

---

# 📁 3. D - Max Sum Subarray of Size K

## 📌 Problem

Find maximum sum of subarray of **fixed size k**

---

## 🧠 Logic

- Keep window size = k
- Add new element
- Remove old element

---

## ✅ Code

```cpp
if (r - l + 1 == k) {
    ans = max(ans, sum);
    sum -= a[l];
    l++;
}
```

---

## 🎯 Pattern

👉 Fixed Window

---

## ⏱ Complexity

- **O(n)**

---

# 📁 4. E - First Negative in Every Window

## 📌 Problem

For every window of size `k`, find **first negative number**

---

## 🧠 Trick

Use a **queue**:

- Store negative numbers
- Front = first negative in window

---

## ✅ Code

```cpp
if(a[r] < 0)
    q.push(a[r]);

if(r - l + 1 == k){
    if(!q.empty()){
        ans.push_back(q.front());
        if(a[l] == q.front())
            q.pop();
    } else {
        ans.push_back(0);
    }
    l++;
}
```

---

## 🎯 Key Idea

👉 Queue keeps track of useful elements

---

# 📁 5. F_Segments_with_Small_Spread.cpp

## 📌 Problem

Count subarrays where:

```cpp
max - min <= k
```

---

## 🧠 Trick

Use **multiset**:

- Automatically sorted
- Get min → `*begin()`
- Get max → `*rbegin()`

---

## ✅ Code Idea

```cpp
ml.insert(v[r]);

while (max - min > k) {
    ml.erase(ml.find(v[l]));
    l++;
}

ans += r - l + 1;
```

---

## 🎯 Key Idea

👉 Maintain valid window using sorted structure

---

## ⏱ Complexity

- **O(n log n)** (because of multiset)

---

# 📁 6. Longest Substring with K Unique Characters

## 📌 Problem

Find longest substring with **exactly k unique characters**

---

## 🧠 Trick

Use **map** to count frequency

---

## ✅ Code

```cpp
mp[s[r]]++;

if(mp.size() == k){
    ans = max(ans, r - l + 1);
}

while(mp.size() > k){
    mp[s[l]]--;
    if(mp[s[l]] == 0)
        mp.erase(s[l]);
    l++;
}
```

---

## 🎯 Key Idea

👉 Control number of unique characters

---

## ⏱ Complexity

- **O(n log n)** (map operations)

---

# 🔥 Core Sliding Window Patterns

| Pattern             | Example Problem        |
| ------------------- | ---------------------- |
| Fixed Size Window   | Max sum of size k      |
| Variable Window     | Sum ≤ k                |
| Count Subarrays     | Number of segments     |
| With Data Structure | multiset (min/max)     |
| With Hashing        | map (unique chars)     |
| Queue Optimization  | first negative element |

---

# ⚠️ Common Beginner Mistakes

## ❌ 1. Forgetting to shrink window

```cpp
if(sum > k)
    l++;
```

👉 Sometimes need **while**, not if!

---

## ❌ 2. Wrong window size logic

```cpp
r - l + 1
```

Always double-check this!

---

## ❌ 3. Not removing old elements

Example:

```cpp
sum -= a[l];
l++;
```

---

## ❌ 4. Using nested loops unnecessarily

Sliding window avoids:

```cpp
for i
   for j
```

---

# 🚀 When to Use Sliding Window?

Look for:

- Subarray / substring problems
- “maximum / minimum length”
- “count number of subarrays”
- Fixed size `k`
- Conditions like:
  - sum ≤ k
  - unique characters
  - max - min constraint

---

# 🧠 Sliding Window vs Two Pointers

| Feature        | Two Pointers    | Sliding Window   |
| -------------- | --------------- | ---------------- |
| General        | Broad technique | Specific pattern |
| Window concept | Not always      | Always           |
| Used for       | pairs, merging  | subarrays        |

---

# 📚 Summary

In this section, you learned:

✅ What Sliding Window is  
✅ Fixed vs Variable window  
✅ Counting subarrays efficiently  
✅ Using queue / map / multiset  
✅ Optimizing from O(n²) → O(n)

---

# 🏁 Final Advice

Whenever you see:

> “subarray”, “substring”, “window”, “range”

👉 Think:

**“Can I solve this using Sliding Window?”**

---

# Author

**Engr. Md Monjur Bakth Mazumder**

🎓 Diploma in Computer Science and Technology — [Moulvibazar Polytechnic Institute](https://mpi.moulvibazar.gov.bd/)  
🎓 BSc in Computer Science & Engineering (CSE) (Ongoing) — [Sylhet International University](https://siu.edu.bd/)

📧 Email: monjurmbm404@gmail.com

### ⭐ If you find this helpful, don’t forget to **star** the repository!
