// https://school.programmers.co.kr/learn/courses/30/lessons/42748

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
    vector<int> answer;

    for (const auto &com : commands)
    {
        vector<int> temp(array.begin() + com[0] - 1, array.begin() + com[1]);
        sort(temp.begin(), temp.end());
        answer.push_back(temp[com[2] - 1]);
    }

    return answer;
}
