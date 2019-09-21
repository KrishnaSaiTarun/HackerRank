#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int sum = 0;
    int valley = 0;
    for(int i =0; i<s.length(); i++){
        int prev = sum;
        if(s[i] == 'U') sum++;
        else sum--;

        if(prev == 0 && sum<0) valley++;

    }
    return valley;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
