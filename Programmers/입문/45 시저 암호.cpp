// https://school.programmers.co.kr/learn/courses/30/lessons/12926#

#include <string>
#include <vector>

using namespace std;

string solution(string s, int n)
{
    string answer = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
            answer += ' ';
        else if ('a' <= s[i] && s[i] <= 'z' && 'z' < s[i] + n)
            answer += (s[i] + (n - 26));
        else if ('A' <= s[i] && s[i] <= 'Z' && 'Z' < s[i] + n)
            answer += (s[i] + (n - 26));
        else
            answer += (s[i] + n);
    }
    return answer;
}

/* 개선한 코드
string solution(string s, int n)
{
    for (char &c : s)
    {
        if (c == ' ')
            continue;
        char base = isupper(c) ? 'A' : 'a';
        c = base + (c - base + n) % 26;
    }
    return s;
}
*/