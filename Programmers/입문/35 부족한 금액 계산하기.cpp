// https://school.programmers.co.kr/learn/courses/30/lessons/82612

using namespace std;

long long solution(int price, int money, int count)
{
    long long pay = 0;
    for (int i = 1; i <= count; i++)
    {
        pay += (price * i);
    }

    return pay > money ? pay - money : 0;
    ;
}

// long long pay = 1LL * price * count * (count+1) / 2;