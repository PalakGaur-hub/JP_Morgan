#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Problem:
Given a list of strings `names` and a list of query strings `query`,
for each query string q, count how many names:

1. Start with q (prefix match)
2. Are strictly longer than q

Return an array of counts corresponding to each query.

Approach:
- For each query:
    - Traverse all names
    - Check:
        1. Prefix match using strncmp()
        2. Length condition (name length > query length)

Time Complexity: O(n * m)
Space Complexity: O(1) (excluding output array)
*/

int* findCompletePrefixes(int names_count, char** names, int query_count, char** query, int* result_count) {

    // Set result size
    *result_count = query_count;

    // Allocate memory for result array
    int *result = (int*) malloc(query_count * sizeof(int));

    // Process each query
    for (int i = 0; i < query_count; i++) {
        int count = 0;
        int lenq = strlen(query[i]);

        for (int j = 0; j < names_count; j++) {
            int lenn = strlen(names[j]);

            // Check prefix match + strictly longer condition
            if (lenn > lenq && strncmp(names[j], query[i], lenq) == 0) {
                count++;
            }
        }

        result[i] = count;
    }

    return result;
}

/* Example Usage */
int main() {
    char *names[] = {
        "Steve", "Steve", "Stanis", "Steve",
        "Stan", "John", "Johnny", "Joe",
        "Alex", "Alexander"
    };

    char *queries[] = {
        "Steve", "Alex", "Joe", "Joe", "Stan"
    };

    int names_count = 10;
    int query_count = 5;
    int result_count;

    int* result = findCompletePrefixes(names_count, names, query_count, queries, &result_count);

    printf("Output: ");
    for (int i = 0; i < result_count; i++) {
        printf("%d ", result[i]);
    }

    free(result);
    return 0;
}
