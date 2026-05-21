Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";

        int i = 0, j = 0;

        // Merge alternately
        while (i < word1.length() && j < word2.length()) {
            cout << "wordstart   :: "<< word1[i++] << endl;
            result += word1[i++];
            cout << "word1    :: "<< word1[i++] << "     next  ::" <<word1[i] << endl;
            cout << "first    :: "<< result << endl;
            result += word2[j++];
            cout << "2nd    :: "<< result << endl;
        }

        // Add remaining characters from word1
        while (i < word1.length()) {
            result += word1[i++];
        }

        // Add remaining characters from word2
        while (j < word2.length()) {
            result += word2[j++];
        }

        return result;
    }
};

int main() {
    Solution obj;

    string word1, word2;

    cout << "Enter first string: ";
    cin >> word1;

    cout << "Enter second string: ";
    cin >> word2;

    string ans = obj.mergeAlternately(word1, word2);

    cout << "Merged String: " << ans << endl;

    return 0;
}
