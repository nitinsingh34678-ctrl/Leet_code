bool backspaceCompare(char* s, char* t) {
    char *stack1=malloc(strlen(s)*sizeof(char));
    char *stack2=malloc(strlen(t)*sizeof(char));
    int top1=-1,top2=-1,i;
    for(i=0;i<strlen(s);i++){
            if(s[i]!='#'){
                stack1[++top1]=s[i];
            }
            else if(top1!=-1){
                top1--;
            }
    }
    for(i=0;i<strlen(t);i++){
            if(t[i]!='#'){
                stack2[++top2]=t[i];
            }
            else if(top2!=-1){
                top2--;
            }
        }
    
    if(top1!=top2)
        return false;
    for(i=0;i<=top1;i++){
        if(stack1[i]!=stack2[i])
            return false;
    }
    return true;
    free(stack1);
    free(stack2);
}