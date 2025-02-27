#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "lEetCOde";
    
    // Step 1: Collect the indices and the vowels from the string
    vector<int> vowelIndices;
    vector<char> vowels;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || 
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            vowelIndices.push_back(i);
            vowels.push_back(s[i]);
        }
    }

    // Step 2: Sort the vowels (both lowercase and uppercase)
    sort(vowels.begin(), vowels.end());
    
    // Step 3: Place the sorted vowels back into the string
    int vowelIndex = 0;
    for (int idx : vowelIndices) {
        s[idx] = vowels[vowelIndex++];
    }

    // Step 4: Output the modified string
    cout << s << endl;
}
