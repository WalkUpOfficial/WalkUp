#include <iostream>
using namespace std;

int main() {
    int matrix[5][5];
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }
    
    int m, n;
    cin >> m >> n;
    
    m--;
    n--;
    
    for (int j = 0; j < 5; j++) {
        int temp = matrix[m][j];
        matrix[m][j] = matrix[n][j];
        matrix[n][j] = temp;
    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matrix[i][j];
            if (j < 4) cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}
