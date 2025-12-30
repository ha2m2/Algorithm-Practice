// 임의의 양의 정수 n에 대해, n이 어떤 양의 정수 x의 제곱인지 아닌지 판단하려 합니다.
// n이 양의 정수 x의 제곱이라면 x+1의 제곱을 리턴하고, n이 양의 정수 x의 제곱이 아니라면 -1을 리턴하는 함수를 완성하세요.

#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n)
{
    long long answer = sqrt(n);
    return pow(answer, 2) == n ? pow(answer + 1, 2) : -1;
}