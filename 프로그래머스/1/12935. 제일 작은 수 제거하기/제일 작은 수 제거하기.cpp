#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    auto minValue = min_element(arr.begin(), arr.end());
    for ( auto each : arr ) {
        if( each == *minValue ) continue;
        answer.push_back(each);
    }
    return answer.empty() ? vector<int>{-1} : answer;
}