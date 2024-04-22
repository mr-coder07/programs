def insertion_sort(bucket):
    for i in range(1, len(bucket)):
        key = bucket[i]
        j = i - 1
        while j >= 0 and key < bucket[j]:
            bucket[j + 1] = bucket[j]
            j -= 1
        bucket[j + 1] = key

def bucket_sort(arr):
    # Determine the range of input values
    min_val, max_val = min(arr), max(arr)
    range_val = max_val - min_val + 1

    # Calculate the number of buckets
    num_buckets = len(arr)

    # Create empty buckets
    buckets = [[] for _ in range(num_buckets)]

    # Distribute elements into buckets
    for num in arr:
        index = int((num - min_val) / range_val * (num_buckets - 1)) #learn this formula for the index of each sub bucket 
        buckets[index].append(num)

    # Sort each bucket
    for bucket in buckets:
        insertion_sort(bucket)

    # Concatenate the sorted buckets
    sorted_array = [num for bucket in buckets for num in bucket]

    return sorted_array

my_list = [8, 12, 34, 0.1, 0.45, 0.23, 0.67]
print("Original List:", my_list)

sorted_list = bucket_sort(my_list)

print("Sorted List:", sorted_list)
