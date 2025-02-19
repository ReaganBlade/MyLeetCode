## **Problem Statement**  
A farmer wants to farm their land with the maximum area where good land is present.  

The land is represented as an **N × M** binary matrix, where:  
- `1` represents **good land**  
- `0` represents **bad land**  

The farmer **can only farm in a square** of good land with the maximum possible area.  

Your task is to determine the **area of the largest square** consisting only of `1s` in the given matrix.  

---

## **Input Format**  
- The first line contains two integers, `N` and `M` (1 ≤ N, M ≤ 1000), representing the number of rows and columns in the matrix.  
- The next `N` lines each contain `M` space-separated integers (`0` or `1`).  

---

## **Output Format**  
- Print a single integer representing the **maximum area** of the largest square consisting only of `1s`.  

---

## **Constraints**  
- `1 ≤ N, M ≤ 1000`  
- Each cell contains either `0` or `1`.  

---

## **Sample Test Case**  

### **Input**  
```
4 5
1 1 0 1 1
1 1 0 1 1
1 1 1 1 1
0 0 1 1 1
```

### **Output**  
```
9
```

### **Explanation**  
The largest square of `1s` has a **side length of 3**, so its area is **3 × 3 = 9**.  

---

## **Notes**  
- You may use **dynamic programming** to solve this problem efficiently.  
- The optimal approach runs in **O(N × M)** time complexity.  

