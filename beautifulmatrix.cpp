#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int matrix[5][5], positionRow, positionCol;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin >> matrix[i][j];

            if(matrix[i][j] == 1)
            {
                positionRow = i;
                positionCol = j;
            }
        }
    }

    int moves = abs(positionRow - 2) + abs(positionCol - 2);

    cout << moves << endl;

    return 0;
}