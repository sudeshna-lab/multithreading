  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int n = word1.size();
        int m = word2.size();

        int i = 0;

        string word = "";

        while (i < max(n, m)) {

            // Add character from word1 if available
            if (i < n) {
                word += word1[i];
            }

            // Add character from word2 if available
            if (i < m) {
                word += word2[i];
            }

            i++;
        }

        return word;
    }
};

int main() {

    Solution obj;

    string word1, word2;

    cout << "Enter first string: ";
    cin >> word1;

    cout << "Enter second string: ";
    cin >> word2;

    string result = obj.mergeAlternately(word1, word2);

    cout << "Merged String: " << result << endl;

    return 0;
}
