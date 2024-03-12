import java.util.Arrays;

public class MergeSort {
    public static void merge(int[] arr, int l, int mid, int r) {
        int an = mid - l + 1;
        int bn = r - (mid + 1) + 1;
        int[] a = Arrays.copyOfRange(arr, l, mid + 1); // create one array
        int[] b = Arrays.copyOfRange(arr, mid + 1, r + 1); // create another array

        int i = 0;
        int j = 0;
        int k = l;
        while (i < an && j < bn) {
            if (a[i] < b[j]) {
                arr[k++] = a[i++];
            } else {
                arr[k++] = b[j++];
            }
        }
        while (i < an) {
            arr[k++] = a[i++];
        }
        while (j < bn) {
            arr[k++] = b[j++];
        }
    }

    public static void mergesort(int[] arr, int l, int r) {
        if (l >= r) return;

        int mid = (l + r) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }

    public static void main(String[] args) {
        int[] arr = {8, 5, 4, 7, 6};
        int size = arr.length;
        mergesort(arr, 0, size - 1);
        System.out.print("The sorted array: ");
        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
