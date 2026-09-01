bool repeatedSubstringPattern(char* s) {
    int i,j;
    int valid;
    int len_s=strlen(s);
    for(i=1;i<len_s;i++){
        if(len_s %i !=0)
            continue;
        valid=1;
        for(j=0;j<len_s;j++){
            if(s[j]!=s[j%i]){
                valid=0;
                break;
            }


        }
        if(valid)
            return true;
        
    }
    return false;
}