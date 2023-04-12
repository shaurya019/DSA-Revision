int countSum(int a[], int n, int sum)
{
 
    // Initialize variables
    int i, j, k;
 
    // Initialize answer
    int count = 0;
 
    // Store the frequency of sum
    // of first two elements
    unordered_map<int, int> m;
 
    // Traverse from 0 to N-1, where
    // arr[i] is the 3rd element
    for (i = 0; i < n - 1; i++) {
 
        // All possible 4th elements
        for (j = i + 1; j < n; j++) {
 
            // Sum of last two element
            int temp = a[i] + a[j];
 
            // Frequency of sum of first
            // two elements
            if (temp < sum)
                count += m[sum - temp];
        }
        for (j = 0; j < i; j++) {
 
            // Store frequency of all possible
            // sums of first two elements
            int temp = a[i] + a[j];
 
            if (temp < sum)
                m[temp]++;
        }
    }
 
    // Return the answer
    return count;
}
 