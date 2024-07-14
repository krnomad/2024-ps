#include <string>
#include <vector>
#include <sstream>

using namespace std;

#define ODD "수"
#define EVEN "박"

string solution(int n) {
    stringstream ss;
    for ( int i=1; i<=n; i++ ) {
        if ( i % 2 == 0 ) {
            // even
            ss << EVEN;
        } else {
            // odd
            ss << ODD;
        }
    }
    return ss.str();
}