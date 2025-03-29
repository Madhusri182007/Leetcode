void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int result[matrixSize][matrixSize];
    for(int i=0;i<matrixSize;i++)
    {
        for(int j=i;j<matrixSize;j++)
        {
            int t=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=t;
        }
    }
    for (int i = 0; i <matrixSize; i++) 
    {
        for (int j = 0; j < matrixSize/ 2; j++) 
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][matrixSize- j - 1];
            matrix[i][matrixSize-j - 1] = temp;
        }
    }
}
