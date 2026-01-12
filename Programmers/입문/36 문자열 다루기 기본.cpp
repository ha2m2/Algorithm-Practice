// https://school.programmers.co.kr/learn/courses/30/lessons/12918

#include <string>
#include <vector>

using namespace std;

bool solution(string s)
{
    for (const auto &str : s)
    {
        if (!isdigit(str))
            return false;
    }
    return s.size() == 4 || s.size() == 6 ? true : false;
}