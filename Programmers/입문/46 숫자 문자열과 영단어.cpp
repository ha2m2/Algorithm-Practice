// https://school.programmers.co.kr/learn/courses/30/lessons/81301

#include <string>
#include <vector>

using namespace std;

string changeNum(string str)
{
    switch (str.size())
    {
    case 3:
        if (str == "one")
            str = "1";
        else if (str == "two")
            str = "2";
        else if (str == "six")
            str = "6";
        break;
    case 4:
        if (str == "zero")
            str = "0";
        else if (str == "four")
            str = "4";
        else if (str == "five")
            str = "5";
        else if (str == "nine")
            str = "9";
        break;
    case 5:
        if (str == "three")
            str = "3";
        else if (str == "seven")
            str = "7";
        else if (str == "eight")
            str = "8";
        break;
    }
    return str;
}

int solution(string s)
{
    string answer = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            answer += s[i];
            continue;
        }

        for (int j = 3; j <= 5; j++)
        {
            string str = changeNum(s.substr(i, j));
            if (str.size() == 1)
            {
                answer += str;
                i += --j;
                break;
            }
        }
    }

    return stoi(answer);
}

/* 개선된 코드
int solution(string s) {
    s = regex_replace(s, regex("zero"), "0");
    s = regex_replace(s, regex("one"), "1");
    s = regex_replace(s, regex("two"), "2");
    s = regex_replace(s, regex("three"), "3");
    s = regex_replace(s, regex("four"), "4");
    s = regex_replace(s, regex("five"), "5");
    s = regex_replace(s, regex("six"), "6");
    s = regex_replace(s, regex("seven"), "7");
    s = regex_replace(s, regex("eight"), "8");
    s = regex_replace(s, regex("nine"), "9");
    return stoi(s);
}*/