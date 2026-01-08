// https://school.programmers.co.kr/learn/courses/30/lessons/12935

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
    int min = 0;

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < arr[min])
            min = i;
    }

    arr.erase(arr.begin() + min);

    if (arr.empty())
        arr.push_back(-1);

    return arr;
}