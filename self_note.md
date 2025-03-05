### Taking Variable-Length Input in C++

When the number of inputs is unknown, we can use the following approach:

```cpp
int x;
while (cin >> x) {
    // Process x
}
```

Explanation:
- This loop continuously reads input until the input stream (cin) reaches the end of file (EOF) or encounters an invalid input.
- It works well for space-separated or newline-separated inputs.



### Understanding std::unique() in C++

std::unique() is an algorithm from <algorithm> that removes consecutive duplicate elements in a sorted range.
It does NOT resize the vector. Instead, it moves duplicates to the end and returns an iterator to the new logical end.

```cpp
auto it = unique(arr.begin(), arr.end());
```

arr.begin(), arr.end(): The range to process.
it: The new logical end of the unique elements.


### Understanding std::erase() in C++

erase(start, end) removes elements in the given range.

```cpp
arr.erase(arr.begin() +2, arr.end());
```

✔ erase(start, end) requires iterators, not integers.
✔ arr.begin() + index converts an index to an iterator.
✔ arr.erase(arr.begin() + 2, arr.end()); removes elements from index 2 to the end.