#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    int size = phone_number.size();
    return string(size-4, '*') + phone_number.substr(size-4, size+1);
}