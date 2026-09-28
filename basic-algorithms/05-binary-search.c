
#include <stdio.h>

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int left = 0;
    int right = n - 1;
    int found = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            found = mid;
            break;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    if (found != -1) {
        printf("Element found at index %d\n", found);
    } else {
        printf("Element not found\n");
    }

    return 0;
}