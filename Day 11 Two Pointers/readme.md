# 📘 Two Pointers in C++ — Beginner Friendly Guide

Welcome to the **Two Pointers** section 🚀
This part of your repository is focused on one of the **most important problem-solving techniques** in **Competitive Programming** and **DSA**.

If you often see problems about:

- sorted arrays
- subarrays
- pairs
- ranges
- matching values
- shrinking from both ends

…then **Two Pointers** is probably the right technique.

This README explains the idea in a **simple beginner-friendly way**, and also covers the provided problems with clear logic.

---

# 🧠 What is Two Pointers?

**Two Pointers** means using **two variables (usually indexes)** to move through an array or string.

Instead of checking every possible combination with nested loops, we use two pointers to make the solution **faster and smarter**.

---

## ✅ Basic Idea

You usually use:

```cpp
int l = 0, r = 0;
```

or

```cpp
int l = 0, r = n - 1;
```

Where:

- `l` = left pointer
- `r` = right pointer

Then you move them based on conditions.

---

# 🔥 Why Use Two Pointers?

Because it helps reduce time complexity from:

- **O(n²)** ➜ to **O(n)** in many problems

That is a **huge improvement**.

---

# 📌 Common Two Pointer Patterns

## 1. Same Direction

Both pointers move forward.

Example:

```cpp
int l = 0, r = 0;
while (r < n) {
    // logic
}
```

Used in:

- counting smaller elements
- merging sorted arrays
- sliding window
- matching values

---

## 2. Opposite Direction

One starts from left, one from right.

Example:

```cpp
int l = 0, r = n - 1;
while (l < r) {
    // logic
}
```

Used in:

- palindrome problems
- shrinking strings
- pair sum
- removing from ends

---

# 📂 File Structure

```bash
B_Number_of_Smaller.cpp
C_Number_of_Equal.cpp
C_Prepend_and_Append.cpp
```

---

# 📁 1. B_Number_of_Smaller.cpp

## 📌 Problem Idea

You are given **two sorted arrays** `a` and `b`.

For each element in `b`, you need to find:

> **How many elements in `a` are smaller than it**

---

## ✅ Code

```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int l = 0, r = 0, count = 0;

    while (r < m)
    {
        if (l < n && a[l] < b[r])
            l++, count++;
        else
            cout << count << " ", r++;
    }

    return 0;
}
```

---

## 🧠 Beginner Explanation

We use:

- `l` → pointer for array `a`
- `r` → pointer for array `b`

Since both arrays are **sorted**, we don’t need to compare every value.

### Logic:

- If `a[l] < b[r]`, then this element in `a` is smaller than current `b[r]`
- So increase `count`
- Move `l` forward
- Otherwise, print `count` for `b[r]` and move `r`

---

## 🪜 Step-by-Step Example

### Input

```cpp
a = [1, 3, 5]
b = [2, 4, 6]
```

### Process

- For `2` → only `1` is smaller → answer = `1`
- For `4` → `1, 3` are smaller → answer = `2`
- For `6` → `1, 3, 5` are smaller → answer = `3`

### Output

```cpp
1 2 3
```

---

## ⚡ Time Complexity

- `O(n + m)`

Because each pointer moves only forward once.

---

## 🎯 What You Learn Here

- Two pointers in **same direction**
- Working with **sorted arrays**
- Efficient counting

---

# 📁 2. C_Number_of_Equal.cpp

## 📌 Problem Idea

You are given **two sorted arrays** `a` and `b`.

You need to count:

> **How many equal pairs `(i, j)` exist such that `a[i] == b[j]`**

---

## ✅ Code

```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;

    int l = 0, r = 0;
    long long ans = 0;
    while (l < n && r < m)
    {
        int curr = a[l], count1 = 0, count2 = 0;
        while (l < n && a[l] == curr)
            count1++, l++;
        while (b[r] < curr)
            r++;
        count2++, r++;
        while (r < m && b[r] == curr)
            count2++, r++;
        ans += (1ll * count1 * count2);
    }

    cout << ans;

    return 0;
}
```

---

## 🧠 Beginner Explanation

This problem is about **duplicate values**.

Example:

```cpp
a = [1, 1, 2]
b = [1, 1, 1, 2]
```

Now:

- `1` appears **2 times** in `a`
- `1` appears **3 times** in `b`

So total equal pairs for `1`:

```cpp
2 × 3 = 6
```

And if `2` appears once in both:

```cpp
1 × 1 = 1
```

### Final Answer = `6 + 1 = 7`

---

## 💡 Main Logic

For each unique value in `a`:

1. Count how many times it appears in `a`
2. Move pointer in `b` until you reach that value
3. Count how many times it appears in `b`
4. Multiply both counts
5. Add to answer

---

## 🔍 Why Multiplication?

Because every occurrence in `a` can pair with every occurrence in `b`.

If:

- `a` has `3` copies
- `b` has `4` copies

Then equal pairs =

```cpp
3 × 4 = 12
```

---

## ⚠️ Important Note

Your code works for the intended sorted-array logic, but **this line is risky**:

```cpp
while (b[r] < curr)
    r++;
```

Because if `r == m`, it can go out of bounds.

---

## ✅ Safer Version (Recommended)

You can use this improved version in your repo:

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    int l = 0, r = 0;
    long long ans = 0;

    while (l < n && r < m)
    {
        if (a[l] < b[r]) {
            l++;
        }
        else if (a[l] > b[r]) {
            r++;
        }
        else {
            int val = a[l];
            long long count1 = 0, count2 = 0;

            while (l < n && a[l] == val) {
                count1++;
                l++;
            }

            while (r < m && b[r] == val) {
                count2++;
                r++;
            }

            ans += count1 * count2;
        }
    }

    cout << ans << "\n";
    return 0;
}
```

---

## ⚡ Time Complexity

- `O(n + m)`

Each pointer moves only once.

---

## 🎯 What You Learn Here

- Two pointers with **duplicate handling**
- Counting frequencies in sorted arrays
- Avoiding nested loops

---

# 📁 3. C_Prepend_and_Append.cpp

## 📌 Problem Idea

You are given a binary string (`0` and `1`).

You can remove characters from **both ends** while:

> left character and right character are **different**

You need to find:

> the **minimum remaining length** of the string

---

## ✅ Code

```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int l = 0, r = n - 1, ans = n;
        while (l <= r)
        {
            if (s[l] == s[r])
                break;
            else
                ans -= 2, l++, r--;
        }
        cout << ans << endl;
    }

    return 0;
}
```

---

## 🧠 Beginner Explanation

This is a classic **two pointers from both ends** problem.

We start with:

- `l = 0` → beginning of string
- `r = n - 1` → end of string

### Rule:

If `s[l] != s[r]`, we can remove both.

So:

- move `l++`
- move `r--`
- reduce answer by `2`

But if `s[l] == s[r]`, we must stop.

---

## 🪜 Example

### Input

```cpp
s = "1001"
```

### Check:

- `s[0] = '1'`, `s[3] = '1'`
- same → stop immediately

Remaining length = `4`

---

### Another Example

```cpp
s = "0110"
```

- `s[0] = '0'`, `s[3] = '0'`
- same → stop

Remaining length = `4`

---

### Another Example

```cpp
s = "01"
```

- `s[0] = '0'`, `s[1] = '1'`
- different → remove both

Remaining length = `0`

---

## ⚡ Time Complexity

- `O(n)` per test case

---

## 🎯 What You Learn Here

- Two pointers from **opposite ends**
- String shrinking
- Greedy pointer movement

---

# 🔥 Core Two Pointer Patterns Used Here

| Problem            | Pointer Type   | Idea                           |
| ------------------ | -------------- | ------------------------------ |
| Number of Smaller  | Same Direction | Count smaller elements         |
| Number of Equal    | Same Direction | Match equal values efficiently |
| Prepend and Append | Opposite Ends  | Shrink string from both sides  |

---

# 🧠 How to Identify Two Pointer Problems

You should think about **Two Pointers** when you see:

### Arrays / Strings that are:

- sorted
- continuous
- compared from both ends
- searched in pairs
- counted in ranges

---

## Common Clues in Problem Statements

Look for phrases like:

- “count smaller/larger elements”
- “find pair”
- “subarray”
- “minimum/maximum window”
- “sorted array”
- “remove from both ends”
- “merge-like behavior”

If you see these — **Two Pointers might be the trick** 👀

---

# ⚠️ Common Beginner Mistakes

## ❌ Mistake 1: Forgetting array bounds

Wrong:

```cpp
while (b[r] < curr)
    r++;
```

If `r == m`, this crashes.

✅ Always check:

```cpp
while (r < m && b[r] < curr)
    r++;
```

---

## ❌ Mistake 2: Using nested loops unnecessarily

Wrong idea:

```cpp
for each a[i]
   for each b[j]
```

This becomes too slow.

✅ Use pointer movement instead.

---

## ❌ Mistake 3: Not understanding why sorted arrays matter

Two pointers often work because:

> Once something is smaller or bigger, you don’t need to go back.

That only works properly when data is **sorted**.

---

# 🚀 Why Two Pointers is Important in Competitive Programming

Two pointers is used in:

- Codeforces
- CodeChef
- AtCoder
- LeetCode
- ICPC
- Interview problems

It is one of the **must-master techniques** if you want to get better at problem solving.

---

# 📚 Summary

In this section, you learned:

✅ What Two Pointers is  
✅ Same direction pointer technique  
✅ Opposite direction pointer technique  
✅ Counting in sorted arrays  
✅ Handling duplicates  
✅ Shrinking strings from both ends

---

# 🏁 Final Advice

When you solve a problem, ask yourself:

> “Can I solve this by moving two indexes smartly instead of checking everything?”

If yes, then you are probably looking at a **Two Pointers** problem.

---

# Author

**Engr. Md Monjur Bakth Mazumder**

🎓 Diploma in Computer Technology — [Moulvibazar Polytechnic Institute](https://mpi.moulvibazar.gov.bd/)  
🎓 BSc in CSE (Running) — [Sylhet International University](https://siu.edu.bd/)

📧 Email: monjurmbm404@gmail.com

### ⭐ If you find this helpful, don’t forget to **star** the repository!
