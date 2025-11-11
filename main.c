#include <stdio.h> //Standard Input Output Header
#include <stdbool.h> //Standard Boolean header file For boolean expressions

//Function Prototypes

int check_rows(int sudokuGrid[9][9]);
int check_columns(int sudokuGrid[9][9]);
int check_subgrids(int sudokuGrid[9][9]);

int main() { //Main Function

    int sudokuGrid[9][9] = {

        /*( NOTE: THIS IS THE KNOWN SOLUTION OF SUDOKU
        -> PICKED FROM INTERNET
        -> ANY OF THE VALUE CAN BE CHANGED IN THE SOLUTION TO CHECK FOR THE INVALID SOLUTION
        ) */

        {5,3,4, 6,7,8, 9,1,2},
        {6,7,2, 1,9,5, 3,4,8},
        {1,9,8, 3,4,2, 5,6,7},

        {8,5,9, 7,6,1, 4,2,3},
        {4,2,6, 8,5,3, 7,9,1},
        {7,1,3, 9,2,4, 8,5,6},

        {9,6,1, 5,3,7, 2,8,4},
        {2,8,7, 4,1,9, 6,3,5},
        {3,4,5, 2,8,6, 1,7,9}
    };

    if ( check_rows(sudokuGrid) && check_columns(sudokuGrid) && check_subgrids(sudokuGrid) )
        printf("VALID SOLUTION\n");
    else
        printf("INVALID SOLUTION\n");

    return 0;

}

int check_rows(int sudokuGrid[9][9]) {
    int i,j,k;

    for(i=0;i<9;i++){ // looping over rows
        for (j=0;j<9;j++){ // each element in a row
            for(k=j+1;k<9;k++){ // comparing one element with another in the same row

                if (sudokuGrid[i][j] == sudokuGrid[i][k]){ // if two elements in the same row are equal, that means it is a duplicate
                    return 0;
                }
            }
        }
    }

    return 1;
}

int check_columns(int sudokuGrid[9][9]) {
    int i,j,k;

    for (i=0; i<9;i++) { //looping over columns
        for (j= 0;j<9;j++) { // each element in a column
            for (k=j+1;k<9;k++) { // comparing one element with another in the same column

                if (sudokuGrid[j][i] == sudokuGrid[k][i]) // if two elements in the same column are equal, that means it is a duplicate
                    return 0;
            }
        }
    }
    return 1;
}

int check_subgrids(int sudokuGrid[9][9]) {

    int rowStart, colStart, i, j, m, n;


    for (rowStart = 0; rowStart < 9; rowStart += 3) { //1st element of each row

        for (colStart = 0; colStart < 9; colStart += 3) { //1st element of each column
            
            for (i = rowStart; i < rowStart + 3; i++) { //loops over each element of each row in 3x3 grid

                for (j = colStart; j < colStart + 3; j++) { //loops over each element of each columns in 3x3 grid
                    
                    for (m = i; m < rowStart + 3; m++) {

                        for (n = (m == i ? j + 1 : colStart); n < colStart + 3; n++) { //comparing each element in the 3x3 grid avoiding comparing with itself

                            if (sudokuGrid[i][j] == sudokuGrid[m][n]) //check for duplicates
                                return 0;
                        }
                    }
                }
            }
        }
    }
    return 1;
}