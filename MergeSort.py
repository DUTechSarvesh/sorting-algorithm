def merge(arr, l, mid, r):
    n1 = mid - l + 1
    n2 = r - mid

    # Create temp arrays
    L = arr[l:mid+1]
    R = arr[mid+1:r+1]

    i = 0 
    j = 0 
    k = l 

    while i < n1 and j < n2:
        if L[i] < R[j]:
            arr[k] = L[i]
            i += 1
        else:
            arr[k] = R[j]
            j += 1
        k += 1

    # Copy the remaining elements of L[], if there are any
    while i < n1:
        arr[k] = L[i]
        i += 1
        k += 1

    # Copy the remaining elements of R[], if there are any
    while j < n2:
        arr[k] = R[j]
        j += 1
        k += 1

def mergesort(arr, l, r):
    if l < r:
        mid = (l + r) // 2
        mergesort(arr, l, mid)
        mergesort(arr, mid + 1, r)
        merge(arr, l, mid, r)

if __name__ == "__main__":
    arr = [5,8,9,2,1]
    mergesort(arr, 0, len(arr) - 1)
    print("The sorted array:", arr)
