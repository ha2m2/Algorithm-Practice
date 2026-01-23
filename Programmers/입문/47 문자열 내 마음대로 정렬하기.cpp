// https://school.programmers.co.kr/learn/courses/30/lessons/12915

#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strings, int n)
{
    for (int i = 0; i < strings.size() - 1; i++)
    {
        for (int j = i + 1; j < strings.size(); j++)
        {
            if (strings[i][n] > strings[j][n] ||
                (strings[i][n] == strings[j][n] && strings[i] > strings[j]))
            {
                string temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
            }
        }
    }
    return strings;
}

/* 개선된 코드
vector<string> solution(vector<string> strings, int n)
{
    sort(strings.begin(), strings.end(), [n](string a, string b)
         { return a[n] == b[n] ? a < b : a[n] < b[n]; });
    return strings;
}
*/
