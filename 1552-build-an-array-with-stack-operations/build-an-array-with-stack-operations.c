/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** buildArray(int* target, int targetSize, int n, int* returnSize) {
    char **result=malloc((2*n)*sizeof(char *));
    int i=0,k=0,num;
    for(num=1;num<=n && i<targetSize;num++){
        result[k++]="Push";
        if(num==target[i]){
            i++;
        }
        else{
            result[k++]="Pop";
        }
    }
    *returnSize=k;
    return result;
}