// https://school.programmers.co.kr/learn/courses/30/lessons/12969

#include <iostream>

using namespace std;

int main(void)
{
    int n; // 가로
    int m; // 세로
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}