int firstUniqChar(char* s) {
    int i, j;
    int len_s = strlen(s);

    for(i = 0; i < len_s; i++) {
        for(j = 0; j < len_s; j++) {

            if(i != j && s[i] == s[j]) {
                break;
            }
        }

        if(j == len_s)
            return i;
    }

    return -1;
}