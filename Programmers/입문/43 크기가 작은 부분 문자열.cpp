// https://school.programmers.co.kr/learn/courses/30/lessons/147355

#include <string>
#include <vector>

using namespace std;

int solution(string t, string p)
{
    int answer = 0;

    for (int i = 0; i <= t.size() - p.size(); i++)
    {
        answer += (t.substr(i, p.size()) <= p);
    }
    return answer;
}

/* 처음 작성한 코드
int solution(string t, string p)
{
    int answer = 0;
    for (int i = 0; i < t.size() - (p.size() - 1); i++)
    {
        string str = "";
        for (int j = 0; j < p.size(); j++)
        {
            str += t[i + j];
        }
        if (stoll(str) <= stoll(p))
            answer++;
    }
    return answer;
}
*/