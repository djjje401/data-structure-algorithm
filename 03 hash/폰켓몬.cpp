#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;

    unordered_set<int> kinds;
    //int형 값들을 저장하는 kinds배열
    //중복된 값은 저장되지 않는다 


    for (int i = 0;i < nums.size();i++)
    {
        kinds.insert(nums[i]);
    }

    int kindcount = kinds.size();
    int selectioncount = nums.size() / 2;

    answer=min(kindcount, selectioncount);

    return answer;
}
