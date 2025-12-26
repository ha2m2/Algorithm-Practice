// 정수를 담고 있는 배열 arr의 평균값을 return하는 함수, solution을 완성해보세요.

#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr)
{
    double sum = 0;

    for (const auto &a : arr)
        sum += a;

    return sum / arr.size();
}