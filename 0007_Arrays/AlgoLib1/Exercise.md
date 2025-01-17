# Exercise

Implement the following functions:

```cpp
bool allOf(int32_t *array, size_t length, int32_t value);

bool anyOf(int32_t *array, size_t length, int32_t value);

bool noneOf(int32_t *array, size_t length, int32_t value);

size_t count(int32_t *array, size_t length, int32_t value);
```

- allOf()
  - Returns true if all elements in the array are equal to the **value**
  - E.g. allOf([1, 1, 1], 3, 1) => true
  - E.g. allOf([1, 1, 2], 3, 1) => false
- anyOf
  - Returns true if at least one element in the array is equal to the **value**
  - E.g. anyOf([1, 1, 1], 3, 1) => true
  - E.g. anyOf([1, 1, 2], 3, 1) => true
- noneOf
  - Returns true if all elements in the array are not equal to the **value**
  - E.g. noneOf([1, 1, 1], 3, 1) => false
  - E.g. noneOf([1, 1, 2], 3, 1) => false
- count
  - Counts the elements in the array that are equal to the **value**
  - E.g. count([1, 1, 1], 3, 1) => 3
  - E.g. count([1, 1, 2], 3, 1) => 2

Note: Make sure that the input pointers are valid.

## Main Function

```cpp
int main()
{
    int32_t array[] = {3, 1, 4, 1, 5, 9, 2, 6};
    size_t length = 8;

    printf("allOf: %d\n", allOf(array, length, 5));
    printf("anyOf: %d\n", anyOf(array, length, 5));
    printf("noneOf: %d\n", noneOf(array, length, 5));
    printf("count of 1: %llu", count(array, length, 1));

    return 0;
}
```
