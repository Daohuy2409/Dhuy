int** transpose(int** matrix, int nRows, int nCols){
    int **Tmatrix=new int *[nCols];
    for(int i=0;i<nCols;++i){
        Tmatrix[i]=new int [nRows];
        for(int j=0;j<nRows;++j){
            Tmatrix[i][j]=matrix[j][i];
        }
    }
    return Tmatrix;
}