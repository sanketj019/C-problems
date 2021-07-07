
//matrix of n x n size.

 void transpose(&matrix, int n)
    {

        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
                {
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[j][i];
                    matrix[j][i] = temp;
                }
        }
    }
