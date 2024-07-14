#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    int size = phone_number.size();
    for ( int i=0; i<phone_number.size()-4; i++ ) {
        phone_number[i] = '*';
    }
    
    return phone_number;
}