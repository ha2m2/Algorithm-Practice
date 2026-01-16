// https://school.programmers.co.kr/learn/courses/30/lessons/12930

#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    int count = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
            count = 1;
        else
        {
            count % 2 ? s[i] = toupper(s[i]) : s[i] = tolower(s[i]);
            count++;
        }
    }
    return s;
}