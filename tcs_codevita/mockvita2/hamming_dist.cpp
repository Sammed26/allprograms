#include <iostream>
#include <string>

using namespace std;

bool isBinaryString(const string& s) {
    for (char c : s) {
        if (c != '0' && c != '1') return false;
    }
    return true;
}

int calculateHammingDistance(const string& original, const string& rearranged) {
    int distance = 0;
    for (size_t i = 0; i < original.size(); ++i) {
        if (original[i] != rearranged[i]) distance++;
    }
    return distance;
}

int getMinCostHammingDistance(const string& s, int a, int b) {
    int length = s.length();
    int onesCount = 0;
    for (char c : s) {
        if (c == '1') onesCount++;
    }
    int zerosCount = length - onesCount;
    
    string rearranged = (a > b) ? string(onesCount, '1') + string(zerosCount, '0')
                                : string(zerosCount, '0') + string(onesCount, '1');
    
    return calculateHammingDistance(s, rearranged);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string str;
        int a, b;
        cin >> str >> a >> b;

        if (!isBinaryString(str)) {
            cout << "INVALID" << endl;
            continue;
        }

        int result = getMinCostHammingDistance(str, a, b);
        cout << result << endl;
    }

    return 0;
}
