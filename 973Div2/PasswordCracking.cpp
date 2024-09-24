#include <bits/stdc++.h>
using namespace std;

bool get_response(string s) {
    bool res;
    cout << "? " << s << endl;  // Asking for a response
    cin >> res;  // Input expected as 0 (false) or 1 (true)
    return res;
}

int main() {
    int t;
    cin >> t; 

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;  
        string temp="";

        // we find the longest suffix first
        while (temp.size() < n) {
            // Add '0' to the current string
            temp += '0';
            if (get_response(temp) == false) {
                // If the current guess is incorrect, change last bit to '1'
                temp.back() = '1';
                if (get_response(temp) == false) {
                    // If both '0' and '1' guesses fail, backtrack by popping the last character
                    temp.pop_back();
                    break;
                }
            }
        }

        // Now, adjust the prefix based on the responses
        while (temp.size() < n) {
            // Add '0' at the start of the string
            temp = '0' + temp;
            if (get_response(temp) == false) {
                // If '0' at the start is wrong, pop it and add '1' instead
                temp = temp.substr(1);
                temp='1'+temp;
            }
        }
        // Output the final correct string
        cout << "! " << temp << endl;
    }

    return 0;
}
