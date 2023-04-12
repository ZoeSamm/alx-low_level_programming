def linear_search(array, size, value):
    if array is None:
        return -1
    for i in range(size):
        print("Comparing value {} with {}".format(array[i], value))
        if array[i] == value:
            return i
    return -1

