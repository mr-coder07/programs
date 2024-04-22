def counting_sort(arr, exp):
    n = len(arr)
    output = [0] * n
    count = [0] * 10

    # Count occurrences of digits at the current place value
    for i in range(n):
        index = arr[i] // exp
        count[index % 10] += 1

    # Calculate cumulative sums
    for i in range(1, 10):
        count[i] += count[i - 1]

    # Build the output array
    i = n - 1
    while i >= 0:
        index = arr[i] // exp
        output[count[index % 10] - 1] = arr[i]
        count[index % 10] -= 1
        i -= 1

    # Copy the output array to the original array
    for i in range(n):
        arr[i] = output[i]

def radix_sort(arr):
    max_num = max(arr)
    exp = 1

    while max_num // exp > 0:
        counting_sort(arr, exp)
        exp *= 10

# Example usage:
my_list = [170, 45, 75, 90, 802, 24, 2, 66]
print("Original List:", my_list)

radix_sort(my_list)

print("Sorted List:", my_list)