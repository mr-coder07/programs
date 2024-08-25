def parse_dict(input_str):
    key_value_pairs = input_str.strip('{}').split(',')
    result_dict = {}

    for pair in key_value_pairs:
        key, value = pair.split(':')
        result_dict[key.strip()] = value.strip()

    return result_dict

input_str = input("Enter a dictionary in single line ")
result_dict = parse_dict(input_str)

print("The dictionary is ", result_dict)
