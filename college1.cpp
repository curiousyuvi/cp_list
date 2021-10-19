#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{

    int studentsMarks[20][3];
    for (int i = 0; i < 20; i++)
    {
        cout << "Enter marks for student " << i + 1 << " :" << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "Subject " << j + 1 << " :" << endl;
            cin >> studentsMarks[i][j];
        }
    }

    for (int i = 0; i < 20; i++)
    {
        cout << "Percentage of Student " << i + 1 << " : ";
        int sum = studentsMarks[i][0] + studentsMarks[i][1] + studentsMarks[i][2];
        cout << sum / 3 << "%" << endl;
    }

    return 0;
}