bool canConstruct(char* ransomNote, char* magazine) {
    int i,j;
    int len_ran=strlen(ransomNote);
    int len_mag=strlen(magazine);
    int count[26]={};
    if(len_ran>len_mag){
        return false;
    }
    for(i=0;i<len_mag;i++){
        count[magazine[i] - 'a']++;
        }
    for(j=0;j<len_ran;j++){
        count[ransomNote[j] - 'a']--;
        }
    for(i=0;i<=25;i++){
    if (count[i] < 0)
        return false;
    }
    
    return true;

    }
