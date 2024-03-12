def main():
    n = int(input("Size of the array: "))

    arr = []  # Creating an empty list
    for i in range(n):
        element = int(input(f"Enter element {i+1} of the array: "))
        arr.append(element)

    # Bubble Sort
    for i in range(n - 1):
        for j in range(n - 1 - i):
            if arr[j] > arr[j + 1]:
                # Pythonic swap
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

    print("\nSorted array: ", end="")
    for i in arr:
        print(i, end=" ")

if __name__ == "__main__":
    main()
