// https://school.programmers.co.kr/learn/courses/30/lessons/68644

#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string s)
{
    vector<int> answer;
    map<char, int> m;

    for (int i = 0; i < s.size(); i++)
    {
        m.find(s[i]) != m.end() ? answer.push_back(i - m[s[i]]) : answer.push_back(-1);

        m[s[i]] = i;
    }

    return answer;
}