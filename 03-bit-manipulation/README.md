# 03 — Bit Manipulation

## Resources

- Codeverse (YouTube)
- TakeUforward — Power Set lecture

## Checklist

- [ ] Left shift, right shift
- [ ] XOR, OR, AND operators
- [ ] Set bit, MSB, LSB operations
- [ ] Power Set of an array/string using bits
- [ ] Number of subarrays with XOR = 0 (must-do problem — TakeUforward)

## Key Tricks to Know

```
Check if bit i is set:    (n >> i) & 1
Set bit i:                n | (1 << i)
Clear bit i:              n & ~(1 << i)
Count set bits:           __builtin_popcount(n)   // C++ STL
Check power of 2:         n > 0 && (n & (n-1)) == 0
XOR swap:                 a ^= b; b ^= a; a ^= b;
```

## Problems

| # | Problem | Status | Notes |
|---|---------|--------|-------|
| 1 | Count set bits in an integer | ⬜ | |
| 2 | Check if power of 2 | ⬜ | |
| 3 | Single Number (XOR trick) | ⬜ | |
| 4 | Single Number II | ⬜ | |
| 5 | Reverse bits | ⬜ | |
| 6 | Power Set using bits | ⬜ | |
| 7 | Number of subarrays with XOR = 0 | ⬜ | must-do |
| 8 | Subsets using bitmask | ⬜ | |

## Notes

<!-- Add your notes here -->
