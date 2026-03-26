
---

## 📁 Problems Included

---

### 🔹 1. Maximize XOR with Constraints (`find-y-value.c`)

#### 📌 Problem

Given:

* A binary string `x` of length `n`
* An integer `maxSet`

Construct a binary string `y` such that:

* `y` has at most `maxSet` number of `1`s
* The value of `x XOR y` is maximized

---

#### 🧠 Approach

* XOR gives `1` when bits are different
* So:

  * If `x[i] == '0'` → set `y[i] = '1'` (if limit allows)
  * If `x[i] == '1'` → set `y[i] = '0'`
* Traverse from **left to right** (higher significance bits first)

---

#### ⚡ Example

```
x = "101"
maxSet = 1
```

```
y = "010"
```

---

#### ⏱️ Complexity

* Time: `O(n)`
* Space: `O(n)`

---

---

### 🔹 2. Prefix Matching Count (`findCompletePrefixes.c`)

#### 📌 Problem

Given:

* A list of strings `names`
* A list of query strings `query`

For each query `q`, count how many names:

* Start with `q` (prefix match)
* Are **strictly longer** than `q`

---

#### 🧠 Approach

* For each query:

  * Traverse all names
  * Check:

    * Prefix match using `strncmp`
    * Length condition (`name length > query length`)

---

#### ⚡ Example

```
names = ["Steve", "Steve", "Stanis", "Steve", "Stan", "John", "Johnny", "Joe", "Alex", "Alexander"]
query = ["Steve", "Alex", "Joe", "Joe", "Stan"]
```

```
Output = [2, 1, 0, 1, 1]
```

---

#### ⏱️ Complexity

* Time: `O(n × m)`
* Space: `O(1)` (excluding output)

---

## 🛠️ Tech Used

* Language: C
* Concepts:

  * Strings
  * Greedy Algorithm
  * Prefix Matching
  * Bit Manipulation

---

## 🚀 Author

Consistent practice + clean logic 💻🔥
