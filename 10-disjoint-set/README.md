# 10 — Disjoint Set (Union-Find / DSU)

## Resources

- cp-algorithms.com — DSU article
- TakeUforward — Kruskal's using DSU

## Checklist

- [ ] DSU with union by rank + path compression
- [ ] Offline queries using DSU
- [ ] Kruskal's Algorithm using DSU (MST)

## DSU Template (C++)

```cpp
struct DSU {
    vector<int> parent, rank_;
    DSU(int n) : parent(n), rank_(n, 0) {
        iota(parent.begin(), parent.end(), 0);
    }
    int find(int x) {
        if (parent[x] != x) parent[x] = find(parent[x]); // path compression
        return parent[x];
    }
    bool unite(int x, int y) {
        x = find(x); y = find(y);
        if (x == y) return false;
        if (rank_[x] < rank_[y]) swap(x, y);
        parent[y] = x;
        if (rank_[x] == rank_[y]) rank_[x]++;
        return true;
    }
};
```

## Problems

| # | Problem | Status | Notes |
|---|---------|--------|-------|
| 1 | Number of Connected Components | ⬜ | |
| 2 | Redundant Connection | ⬜ | |
| 3 | Accounts Merge | ⬜ | |
| 4 | Minimum Spanning Tree (Kruskal) | ⬜ | |
| 5 | Offline queries — add edges, answer connectivity | ⬜ | |

## Notes

<!-- Add your notes here -->
