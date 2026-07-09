#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {

    vector<int> answer;//정답 저장 answer 

    for (int i = 0; i < commands.size(); i++) {
        int start = commands[i][0];
        int end = commands[i][1];
        int k = commands[i][2];

        vector<int> temp;

        for (int j = start - 1; j <= end - 1; j++) {
            temp.push_back(array[j]);
        }

        sort(temp.begin(), temp.end());//자른 배열을 오름차순 정렬 

        answer.push_back(temp[k - 1]);//k번째값을 answer배열에 넣는다 
    }

    return answer;
}
