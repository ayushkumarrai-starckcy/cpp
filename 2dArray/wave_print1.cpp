#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<int>> arr(m, vector<int>(n));

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    // Wave print (row-wise)
    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
                cout << arr[i][j] << " ";
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
                cout << arr[i][j] << " ";
        }
    }


    // Wave print (column-wise)
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < m; i++)
                cout << arr[i][j] << " ";
        }
        else
        {
            for (int i = m - 1; i >= 0; i--)
                cout << arr[i][j] << " ";
        }
    }



    return 0;
}
