#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    int A[10][10], B[10][10], sum[10][10], diff[10][10], product[10][10];

    cout << "Enter first matrix:\n";
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            cin >> A[i][j];

    cout << "Enter second matrix:\n";
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            cin >> B[i][j];

    if(r1 == r2 && c1 == c2) {
        cout << "\nAddition:\n";
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c1; j++)
                cout << A[i][j] + B[i][j] << " ";
            cout << endl;
        }

        cout << "\nSubtraction:\n";
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c1; j++)
                cout << A[i][j] - B[i][j] << " ";
            cout << endl;
        }
    } else {
        cout << "\nAddition and Subtraction not possible\n";
    }

    if(c1 == r2) {
        cout << "\nMultiplication:\n";
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c2; j++) {
                int sum = 0;
                for(int k = 0; k < c1; k++)
                    sum += A[i][k] * B[k][j];
                cout << sum << " ";
            }
            cout << endl;
        }
    } else {
        cout << "\nMultiplication not possible\n";
    }

    return 0;
}