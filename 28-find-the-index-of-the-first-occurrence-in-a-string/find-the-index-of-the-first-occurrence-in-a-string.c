int strStr(char* haystack, char* needle) {
    int i,j;
    int h_len,n_len;
    h_len=strlen(haystack);
    n_len=strlen(needle);
    for(i=0;i<=h_len-n_len;i++){
        j=0;
            while(j<n_len){
                if(haystack[i+j]!=needle[j]){
                break;
            }
            j++;
            }
        if(j==n_len)
            return i;
    }
    return -1;

    }
    
