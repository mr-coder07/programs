def flatten_list(nested_list):
    flat_list = []
    stack = [nested_list]

    while stack:
        current = stack.pop()
        for item in current:
            if isinstance(item, list):
                stack.append(item)
            else:
                flat_list.append(item)

    return flat_list

nested_list = [1, 2, [3, 4, 5], [6, 7]]
flat_list = flatten_list(nested_list)
print(" ".join(map(str, flat_list)))
print(nested_list)