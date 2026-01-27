// https://school.programmers.co.kr/learn/courses/30/lessons/68644

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers)
{
    vector<int> answer;
    for (int i = 0; i < numbers.size() - 1; i++)
    {
        for (int j = i + 1; j < numbers.size(); j++)
        {
            int temp = numbers[i] + numbers[j];
            if (find(answer.begin(), answer.end(), temp) == answer.end())
                answer.push_back(temp);
        }
    }

    sort(answer.begin(), answer.end());
    return answer;
}

/* 개선된 코드 (set 활용)
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> st;
    for(int i = 0;i<numbers.size();++i){
        for(int j = i+1 ; j< numbers.size();++j){
            st.insert(numbers[i] + numbers[j]);
        }
    }
    answer.assign(st.begin(), st.end());
    return answer;
}
*/