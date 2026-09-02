bool judgeCircle(char* moves) {
    int i;
    int x=0;
    int y=0;
    for(i=0;i<strlen(moves);i++){
        if(moves[i]=='U')
            y++;
        if(moves[i]=='D')
            y--;
        if(moves[i]=='R')
            x++;
        if(moves[i]=='L')
            x--;
    }
    if(x==0 && y==0)
        return true;
    return false;
}