#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    char **myString = new char*[n];
    for (int i = 0; i < n; i++)
        myString[i] = new char[m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> myString[i][j];
        
    int count = 0;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < m - 1; j++) {
            if (myString[i][j] == '.') {
                if (myString[i+1][j] == '.')
                    count++;
                if (myString[i][j+1] == '.')
                    count++;
            }
        }
    }

    for (int i = 0; i < m-1; i++)
        if (myString[n-1][i] == '.' && myString[n-1][i+1] == '.')
            count++;

    for (int i = 0; i < n-1; i++)
        if (myString[i][m-1] == '.' && myString[i+1][m-1] == '.')
            count++;

    cout << count;
    return 0;
}