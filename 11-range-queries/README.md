# 11 — Range Queries

## Resources

- Fenwick Tree + Segment Tree: cp-algorithms.com
- Mo's Algorithm: various Codeforces editorials

## Checklist

- [ ] Sparse Table (for static range minimum/maximum queries)
- [ ] Fenwick Tree (Binary Indexed Tree) — point update, prefix query
- [ ] Binary Lifting on Fenwick Tree
- [ ] Range update trick on Fenwick Tree
- [ ] Problems on Fenwick Tree
- [ ] Matrix Exponentiation + problems
- [ ] Sqrt Decomposition
- [ ] Update and Query operations
- [ ] Mo's Algorithm
- [ ] Mo's Algorithm on Trees
- [ ] Segment Tree — range queries + point updates
- [ ] Lazy Propagation on Segment Tree

## Data Structure Comparison

| Structure | Build | Query | Update | Use When |
|-----------|-------|-------|--------|----------|
| Prefix Sum | O(n) | O(1) | O(n) | Static array, sum queries |
| Sparse Table | O(n log n) | O(1) | N/A | Static, idempotent ops (min/max) |
| Fenwick Tree | O(n log n) | O(log n) | O(log n) | Point updates, prefix queries |
| Segment Tree | O(n) | O(log n) | O(log n) | Range queries + updates |
| Segment Tree + Lazy | O(n) | O(log n) | O(log n) | Range updates |
| Sqrt Decomposition | O(n) | O(√n) | O(√n) | General fallback |

## Problems

| # | Problem | Topic | Status | Notes |
|---|---------|-------|--------|-------|
| 1 | Range sum query (static) | Prefix Sum | ⬜ | |
| 2 | Range min query | Sparse Table | ⬜ | |
| 3 | Point update, range sum | Fenwick Tree | ⬜ | |
| 4 | Inversion count | Fenwick Tree | ⬜ | classic |
| 5 | Range sum query, point update | Segment Tree | ⬜ | |
| 6 | Range update, range query | Lazy Seg Tree | ⬜ | |
| 7 | Count of elements in range | Mo's Algo | ⬜ | |

## Notes

<!-- Add your notes here -->
