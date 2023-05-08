#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b) {
    int e = * (const int *) a;
    int f = * (const int *) b;

    if (e < f) return -1;
    if (e > f) return 1;

    return 0;
}

int main (void) {
    int duplicates, numberOfTowers, output, testCases, totalHeight;
    scanf ("%d", &testCases);

    while (testCases--) {
        scanf ("%d", &numberOfTowers);
        int arr [numberOfTowers];
        for (int i = 0; i < numberOfTowers; i++) {
            scanf ("%d", &arr [i]);
        }
        if (numberOfTowers == 1) printf ("%d\n", arr[0]);
        else {
            duplicates = 0;
            output = 0;
            qsort (arr, numberOfTowers, sizeof (int), compare);
            for (int i = 0; i < numberOfTowers - 1; i++) {
                if (arr[i] == arr[i+1]) {
                    duplicates++;
                    totalHeight = arr [i] + duplicates;
                    if (output < totalHeight) output = totalHeight;
                }
                else {
                    duplicates = 0;
                }
            }
            if (arr [numberOfTowers - 1] > output) output = arr [numberOfTowers - 1];
            printf ("%d\n", output);
        }
    }
    return 0;
}
