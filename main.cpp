#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;
    
    vector<int> v;
    cout << "Enter " << N << " numbers: ";
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    set<int> uniqueSet(v.begin(), v.end());
    
    cout << "Unique sorted elements: ";
    for (int num : uniqueSet) cout << num << " ";
    cout << endl;

    return 0;
}
