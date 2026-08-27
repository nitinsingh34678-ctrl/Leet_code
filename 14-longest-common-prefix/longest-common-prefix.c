char* longestCommonPrefix(char** strs, int strsSize) {
    int i,j,k=0;
    char *result= (char *)malloc((strlen(strs[0])+1)*sizeof(char));
    for(i=0;i<strlen(strs[0]);i++){
        for(j=0;j<strsSize-1;j++){
            if(strs[j][i]==strs[j+1][i]){
                continue;
            }
            else{
                result[k]='\0';
                return result;
            }
        }
        result[k]=strs[0][i];
        k++;
    }
    result[k] = '\0';
    return result;
}