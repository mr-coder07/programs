#include <iostream>
#include <vector>

using namespace std;

struct Triplet {
    int row;
    int col;
    int value;
};

bool isSparseMatrix(int matrix[][100], int rows, int cols) {
    int totalElements = rows * cols;
    int zeroCount = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] == 0)
                zeroCount++;
        }
    }

    return (zeroCount > totalElements / 2);
}

void convertToTriplet(int matrix[][100], int rows, int cols, vector<Triplet>& tripletList) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] != 0) {
                Triplet triplet;
                triplet.row = i;
                triplet.col = j;
                triplet.value = matrix[i][j];
                tripletList.push_back(triplet);
            }
        }
    }
}

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[100][100];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    bool isSparse = isSparseMatrix(matrix, rows, cols);

    if (isSparse) {
        cout << "The matrix is sparse." << endl;
        vector<Triplet> tripletList;
        convertToTriplet(matrix, rows, cols, tripletList);

        cout << "Triplet form representation:" << endl;
        for (const auto& triplet : tripletList) {
            cout << "Row: " << triplet.row << ", Column: " << triplet.col << ", Value: " << triplet.value << endl;
        }

        // Calculate bytes saved
        int bytesSaved = (rows * cols * sizeof(int)) - (tripletList.size() * sizeof(Triplet));
        cout << "Bytes saved: " << bytesSaved << " bytes" << endl;
    } else {
        cout << "The matrix is not sparse." << endl;
    }

    return 0;
}
