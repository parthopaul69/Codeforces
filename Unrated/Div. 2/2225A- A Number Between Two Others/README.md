# A. A Number Between Two Others
| Field | Value |
|---|---|
| **Contest** | [2225](https://codeforces.com/contest/2225)|
| **Problem** | [2225A— A Number Between Two Others](https://codeforces.com/contest/2225/problem/A)|
| **Rating** | Gym/Unrated|
| **Tags** | greedy,math|
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2)|
| **Runtime** | 31ms |
| **Memory** | 0KB |
---
| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds| 512 megabytes|

---

You are given two integers  and  such that  and  (that is,  is divisible by ).

Your task is to determine whether there exists an integer  such that

 - lies between  and  (that is, );
- is divisible by  (that is, );
- is not divisible by  (that is, ).

## Input

Each test contains multiple test cases. The first line contains the number of test cases  (). The description of the test cases follows. 

Each test case consists of a single line containing two integers  and  (; ).

## Output

For each test case, print the answer as follows: if the required number  exists, print `YES`; otherwise, print `NO`. You may print each letter in any case.

## Examples

**Example:**

```
5
1 2
1 3
1234567890 12345678900
2 8
7 84
```

**Output:**

```
NO
YES
YES
YES
YES
```

## Note

In the second test case of the example, you can use .

In the third test case of the example, you can use .

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2225/problem/A)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
