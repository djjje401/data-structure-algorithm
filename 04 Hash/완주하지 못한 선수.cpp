#include <string>
#include <vector>
#include <unordered_map> //key value 형태로 저장하는 구조
//key:찾기 위한 이름표  
//value:그 이름표에 저장된 값

using namespace std;

string solution(vector<string> participant, vector<string> completion) {

    unordered_map<string, int> m;//unordered_map<key타입,value 타입> 변수이름;


    for (int i = 0;i < participant.size();i++)
    {
        m[participant[i]]++;//key에 해당하는 value값을 ++함
    }
    for (int i = 0;i < completion.size();i++)
    {
        m[completion[i]]--;//
    }
     
    for (int i = 0;i < participant.size();i++)
    {
        if (m[participant[i]] > 0) //중복 이름도 처리가능
        {
            return participant[i];
        }
    }
    return "";//정답을 못찾으면 빈 문자열을 반환한다
}
