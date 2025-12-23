// 정수 배열 numbers가 매개변수로 주어집니다. numbers의 원소의 평균값을 return하도록 solution 함수를 완성해주세요.

#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers)
{
    double sum = 0;
    for (const auto &n : numbers)
    {
        sum += n;
    }
    return sum / numbers.size();
}