int countStudents(int* students, int studentsSize, int* sandwiches, int sandwichesSize) {
    int circle=0,square=0;
    int i;
    for(i=0;i<studentsSize;i++){
        if(students[i]==0)
            circle++;
        else if(students[i]==1)
            square++;
    }
    for(i=0;i<sandwichesSize;i++){
        if(sandwiches[i]==0){
            if(circle>0)
                circle--;
            else
                break;
        }
        else if (sandwiches[i] == 1) {
            if (square > 0) {
                square--;
            }
            else {
                break;
            }
        }
    }
    return circle + square;
}