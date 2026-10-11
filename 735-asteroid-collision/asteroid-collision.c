/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* asteroidCollision(int* asteroids, int asteroidsSize, int* returnSize) {
    int *stack=malloc(asteroidsSize*sizeof(int));
    int top=-1,alive;
    for(int i=0;i<asteroidsSize;i++){
        alive=1;
        while(top!=-1 && stack[top]>0 && asteroids[i]<0){
            if(stack[top]<abs(asteroids[i])){
                top--;
            }
                
            else if(stack[top]==abs(asteroids[i])){
                top--;
                alive=0;
                break;
            }
            else if(stack[top]>abs(asteroids[i])){
                alive=0;
                break;
            }
        }
        if(alive==1){
            stack[++top]=asteroids[i];
        }
    }
    *returnSize = top + 1;
    return stack;
}