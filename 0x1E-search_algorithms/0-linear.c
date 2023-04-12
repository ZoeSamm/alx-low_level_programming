int main() {
    int array[] = { 4, 2, 8, 1, 3, 7, 9 };
    int size = sizeof(array) / sizeof(array[0]);
    int value = 3;
    int index = linear_search(array, size, value);
    if (index == -1) {
        printf("Value %d not found\n", value);
    } else {
        printf("Value %d found at index %d\n", value, index);
    }
    return 0;
}

