// https://school.programmers.co.kr/learn/courses/30/lessons/12940

#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

vector<int> solution(int n, int m)
{
    int num = gcd(n, m);
    return {num, n * m / num};
}