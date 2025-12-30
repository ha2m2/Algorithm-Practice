// 함수 solution은 정수 n을 매개변수로 입력받습니다. n의 각 자릿수를 큰것부터 작은 순으로 정렬한 새로운 정수를 리턴해주세요. 예를들어 n이 118372면 873211을 리턴하면 됩니다.

#include <string>
#include <vector>

using namespace std;

long long solution(long long n)
{
    string str = to_string(n);
    for (int i = 0; i < str.size() - 1; i++)
    {
        for (int j = 0; j < str.size() - 1 - i; j++)
        {
            if (str[j] < str[j + 1])
            {
                int temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    return stoll(str);
}