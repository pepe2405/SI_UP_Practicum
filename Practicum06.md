# Видове сортиране - https://visualgo.net/en/sorting?slide=1-1

- Bubble sort
- Selection sort
- Insertion sort

# Търсене на елемент в сортиран масив

- Binary search

### Bubble sort

```
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
```

### Selection sort

```
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    for (i = 0; i < n - 1; i++) {
 
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
 
        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}
```

### Insertion sort

```
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
```

### Binary search

```
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if x is present at mid
        if (arr[m] == x)
            return m;
 
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
 
    // If we reach here, then element was not present
    return -1;
}
```

# Задачи, максималният размер да е 1000

## Лесни:

#### **1.**  Напишете функция, която масив от цели числа и индекс и премахва числото, което се намира на този индекс.

Вход:

```
[33 1 23 8 54 5 1 6] 4
```

Изход:

```
[33 1 23 54 5 1 6]
```

#### **2.** Напишете функция, която приема 2 масива от цели числа **arr** и  **result** (който е празен), 2 числа **a** и **b**  и пълни масива **result** с всички числа от  **arr**, които са  в  интервала **[a, b]** .

Вход:

```
[5 7 1 4 3 9 10]
2 8
```

Изход:

```
[5 7 4 3]
```

## Средни:

#### **3.** Да се напише функция, която приема масив от цели числа и връща дали е симетричен.

Вход:

```
[1 2 3 2 1]
```

Изход:

```
yes
```

Вход:

```
[1 2 3 4 1]
```

Изход:

```
no
```

#### **4.** Да се напише функция, която приема масив от цели числа и връща дължината на най-дългата редица от еднакви числа.

**Пример:**

Вход:

```c++
[3 3 2 2 2 5 2 2 3 3 3]
```

Изход:

```c++
3
```

## Трудни:

**5.** Да се напишат функции, които приемат 3 масива от цели числа - **arr1**, **arr2** и **result** (който е празен) и пълнят третия съответно с обединението на **arr1** и **arr2**. **result** да е сортиран във възходящ ред.
Вход:

```
[2 4 1 7 8]
[1 2 3 5]
```

Изход:

```
[ 1 2 3 4 5 7 8 ]

```

**6.** Да се напише функция, която приема 3 масива от цели числа - **arr1**, **arr2** и **result** (който е празен), като **arr1** и **arr2**. В края на функцията **result** представлява сечението на 2-та масива и е сортиран във възходящ ред.

**Пример:**

Вход:

```
[2 4 1 3 7 8]
[1 2 3 5]
```

Изход:

```
[ 1 2 3 ]
```
