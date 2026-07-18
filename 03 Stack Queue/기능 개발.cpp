#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {

    vector<int>day;
    vector<int> answer;

    //각 기능이 완료되는데 필요한 날짜 계산
    for (int i = 0;i < progresses.size();i++)
    {
        int remaining = 100 - progresses[i];
        if ((100 - progresses[i]) / speeds[i] == 0)
        {
            day.push_back( remaining / speeds[i]);
        }
        else
        {
            day.push_back((remaining / speeds[i] + 1));
        }
    }

    //첫번째 기능을 기준으로 배포묶음 시작
    int standardDay = day[0];
    int count = 1;
    for (int i = 1;i < day.size();i++)
    {
        //기존 기능보다 먼저 또는 같은날 완료
        if (day[i] <= standardDay)
        {
            count++;
        }
        else
        {
            //기존 배포묶음 저장
            answer.push_back(count);

            //새로운 배포묶음 시작
            standardDay = day[i];
            count = 1;
        }
    }
    
    //마지막 배포묶음 저장
    answer.push_back(count);


    return answer;
}
