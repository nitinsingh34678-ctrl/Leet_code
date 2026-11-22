bool linear_prob(int *table,bool *visited,int key,int n){
    int index;
    index = ((key % n) + n) % n;
    
    while(visited[index]) {
        if(table[index] == key)
            return true;

        index = (index + 1) % n;
    }

    table[index] = key;
    visited[index]=true;
    
    return false;
    }
void initialize(bool *visited,int n){
    int i;
    for(i=0;i<n;i++){
        visited[i]=false;
    }
}

bool containsDuplicate(int* nums, int numsSize) {
    int i;
    int n=numsSize*2+1;
    int *table=malloc(sizeof(int)*n);
    bool *visited=calloc(sizeof(bool),n);

    initialize(visited,n);

    for(i=0;i<numsSize;i++){
        if(linear_prob(table,visited,nums[i],n)){
            free(table);
            free(visited);
            return true;
        }
    }
    free(table);
    free(visited);
    return false;
}   