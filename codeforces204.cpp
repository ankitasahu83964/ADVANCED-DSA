#include <iostream>
using namespace std;

int main() {
    int a[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    int dx[] = {0, 0, 1, -1, 0};
    int dy[] = {1, -1, 0, 0, 0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int sum = a[i][j];

            for (int k = 0; k < 5; k++) {
                int x = i + dx[k];
                int y = j + dy[k];

                if (x >= 0 && x < 3 && y >= 0 && y < 3)
                    sum += a[x][y];
            }

            cout << (sum % 2 == 0 ? 1 : 0);
        }
        cout << endl;
    }

    return 0;
}