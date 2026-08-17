#include <stdbool.h>
#include <string.h>

bool isSubsequence(char* s, char* t) {
    int i = 0, j, True_count = 0;

    for (j = 0; j < strlen(t); j++) {
        if (s[i] == t[j]) {
            True_count++;
            i++;
        }
    }

    if (i == strlen(s))
        return true;
    else
        return false;
}
