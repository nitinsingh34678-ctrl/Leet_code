bool isIsomorphic(char* s, char* t) {
    int i,j,k;
    int len_s=strlen(s);
    int len_t=strlen(t);
    int mapS[256] = {0};
    int mapT[256] = {0};
    if(len_s!=len_t){
        return false;
    }
    for(i=0;i<len_s;i++){
        if(mapS[s[i]]!=0 && mapS[s[i]]!=t[i]+1)
            return false;
        if(mapT[t[i]]!=0 && mapT[t[i]]!=s[i]+1)
            return false;

        mapS[s[i]] = t[i] + 1;
        mapT[t[i]] = s[i] + 1;
        
    }
    return true;
    
}