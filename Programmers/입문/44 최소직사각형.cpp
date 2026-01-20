// https://school.programmers.co.kr/learn/courses/30/lessons/86491

#include <string>
#include <vector>

using namespace std;

#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes)
{
    int largeW = 0, largeH = 0;

    for (const auto s : sizes)
    {
        largeW = max(largeW, max(s[0], s[1]));
        largeH = max(largeH, min(s[0], s[1]));
    }
    return largeW * largeH;
}

/* 처음 작성한 코드
int solution(vector<vector<int>> sizes)
{
    int largeW = 0, largeH = 0;

    for (int i = 0; i < sizes.size(); i++)
    {
        if (sizes[i][0] >= sizes[i][1])
        {
            if (sizes[i][0] > largeW)
            {
                largeW = sizes[i][0];
            }
            if (sizes[i][1] > largeH)
            {
                largeH = sizes[i][1];
            }
        }
        else
        {
            if (sizes[i][1] > largeW)
            {
                largeW = sizes[i][1];
            }
            if (sizes[i][0] > largeH)
            {
                largeH = sizes[i][0];
            }
        }
    }
    return largeW * largeH;
}*/