def flatten_list(nested_list):
    flat_list = []
    for item in nested_list:
        if isinstance(item, list):
            flat_list.extend(flatten_list(item))
        else:
            flat_list.append(item)
    return flat_list

nested_list = [1, 2, [3, 4, 5], [6, 7]]
flat_list = flatten_list(nested_list)
print(" ".join(map(str, flat_list)))
