char* removeDuplicates(char* s, int k) {
    char *result=malloc((strlen(s)+1)*sizeof(char));
    int *count=malloc(strlen(s)*sizeof(int));
    int top=-1,i;
    for(i=0;i<strlen(s);i++){
        if (top == -1 || result[top] != s[i]) {
            result[++top]=s[i];
            count[top]=1;
        }
        else {
            result[++top]=s[i];
            count[top]=count[top-1]+1;
        }
        if (count[top] == k) {
            top -= k;
        }
    }
    result[top+1]='\0';
    return result;
}