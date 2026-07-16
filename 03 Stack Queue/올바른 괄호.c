#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {

    int count = 0;
    bool answer = true;

    for (int i = 0;s[i]!='\0';i++)
    {
        if (s[i] == '(')
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count < 0)
        {
            answer = false;
            return 0;
        }

    }
    if (count == 0)
    {
        answer = true;
    }
    else
    {
        answer = false;
    }

    return answer;
  
}
