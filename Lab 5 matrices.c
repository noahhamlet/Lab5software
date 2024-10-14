#define SIZE 5
int main() {
    int m1[5][5] = {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10},
    {11, 12, 13, 14, 15},
    {16, 17, 18, 19, 20},
    {21, 22, 23, 24, 25}
    };
    int m2[5][5] = {
    {25, 24, 23, 22, 21},
    {20, 19, 18, 17, 16},
    {15, 14, 13, 12, 11},
    {10, 9, 8, 7, 6},
    {5, 4, 3, 2, 1}
    };
}
int addmatrices(mat1,mat2){
    int rows = 5;
    int cols = 5;
    int result[5][5]
    for(int i=0;i<rows;i++){
        for(int j=0; j<cols; j++){
            result[i][j]=mat1[i][j]+mat2[i][j]
        }
    }
    return result
}

int multiplymatrices(mat1,mat2){
    int rows = 5;
    int cols = 5;
    int result[5][5]
    for(int i=0;i<rows;i++){
        for(int j=0; j<cols; j++){
            result[i][j]+=m1[i][j]*m2[i][j]
        }
    }
   return result;
}
int printmatrix(mat){
    for(int i=0;i<cols;i++){
        printf('%d','%d','%d','%d','%d',mat[0][i],mat[1][i],mat[2][i],mat[3][i],mat[4][i]);
    }
}
int transposematrix(mat){
    int results[5][5]
    for(int i=0;i<rows;i++){
        for(int j=0; j<cols; j++){
            results[j][i]=mat[i][j]
        }
    }
}