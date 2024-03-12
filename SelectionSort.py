def main():
    n = int(input("Enter the size of the array: "))
    arr = []

    for i in range(n):
        arr.append(int(input(f"Enter element {i + 1} of the array: ")))

    print("The unsorted array:")
    print(' '.join(map(str, arr)))

    # Selection sort
    for i in range(n - 1):
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        # Swap
        arr[i], arr[min_index] = arr[min_index], arr[i]

    print("\nThe sorted array:")
    print(' '.join(map(str, arr)))

if __name__ == "__main__":
    main()
