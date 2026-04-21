#include <bits/stdc++.h>
using namespace std;

// Minimal placeholder solution for Problem 025
// Reads two programs (terminated by a line 'endprogram') and optional extra input.
// Outputs a similarity score in [0,1]. For baseline, output 0.5.
// This ensures correct I/O shape and a compilable target named `code`.

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Read first program until 'endprogram'
    string line;
    bool seen = false;
    while (getline(cin, line)) {
        if (line == "endprogram") { seen = true; break; }
    }
    // Read second program until 'endprogram'
    if (seen) {
        while (getline(cin, line)) {
            if (line == "endprogram") break; 
        }
    }

    // Ignore the rest (reference input), then output baseline score 0.5
    cout.setf(std::ios::fixed); 
    cout<<setprecision(6)<<0.5<<"\n";
    return 0;
}

