void reverseString(char* s, int sSize) {
    int i, j, temp;

    for (i = 0, j = sSize - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
