#include <iostream>
#include <c++/4.9/bits/stringfwd.h>
#include <c++/4.9/iostream>
#include <c++/4.9/streambuf>

using namespace std;

int main() {

    string response;
    cout << "Type a string : " << flush;
    getline(cin, response);
    cout << "This string is " << response << endl;
    return 0;

}