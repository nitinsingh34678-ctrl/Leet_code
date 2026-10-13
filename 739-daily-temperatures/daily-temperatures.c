/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* dailyTemperatures(int* temperatures, int temperaturesSize, int* returnSize) {
    int *answer=calloc(temperaturesSize,sizeof(int));
    int *stack=malloc(temperaturesSize*sizeof(int));
    int top=-1;
    int i;

    for(i=0;i<temperaturesSize;i++){
        while(top!=-1 && temperatures[i] > temperatures[stack[top]]){
                    int index = stack[top--];
                    answer[index] = i - index;
        }
        stack[++top]=i;
            
    }
    *returnSize = temperaturesSize;
    return answer;
}