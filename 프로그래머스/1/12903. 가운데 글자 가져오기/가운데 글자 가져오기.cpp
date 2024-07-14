#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    stringstream ss;
    int cen = s.size() / 2;
    if ( s.size() % 2 == 1 ) {
        // odd    
        return s.size() == 1 ? s : string(1, s[cen]);
    }
    
    // even
    ss << s[cen-1] << s[cen];
    return ss.str();
}