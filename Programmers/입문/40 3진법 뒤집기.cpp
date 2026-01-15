// https://school.programmers.co.kr/learn/courses/30/lessons/68935

#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    vector<int> vec;
    int answer = 0, i = 1;

    while (n != 0)
    {
        vec.push_back(n % 3);
        n /= 3;
    }

    while (!vec.empty())
    {
        answer += vec.back() * i;
        vec.pop_back();
        i *= 3;
    }

    return answer;
}

/* 첫 풀이
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int n) {
    vector<int> vec;
    int num = 0, answer = 0, l = 0;
    while (n/int(pow(3, num))){
        num++;
    }
    for(int i = num - 1; i >= 0; i--){
        vec.push_back(n/int(pow(3, i)));
        n = n%int(pow(3, i));
    }
    reverse(vec.begin(), vec.end());
    for(int j = vec.size()-1; j >= 0; j--){
        answer += vec[j] * int(pow(3, l));
        l++;
    }
    return answer;
}*/