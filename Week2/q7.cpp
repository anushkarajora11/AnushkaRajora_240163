int solve(int* A, int n1, int B) {
    int start = 0, end = 0;
    int current_sum = 0;
    int count = 0;

    while (end < n1) {
        current_sum += A[end];

        while (current_sum >= B && start <= end) {
            current_sum -= A[start];
            start++;
        }

        count += (end - start + 1);
        end++;
    }

    return count;
}
