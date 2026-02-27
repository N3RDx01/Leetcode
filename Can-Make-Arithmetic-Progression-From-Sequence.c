1int cmp(const void* a, const void* b) {
2    return (*(int*)a - *(int*)b);
3}
4
5bool canMakeArithmeticProgression(int* arr, int arrSize) {
6    qsort(arr, arrSize, sizeof(int), cmp);
7    int diff = arr[1] - arr[0];
8    for (int i = 2; i < arrSize; i++) {
9        if (arr[i] - arr[i-1] != diff) return false;
10    }
11    return true;
12}