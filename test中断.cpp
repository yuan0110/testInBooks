#include <iostream>
using namespace std;
#include <cassert>
void analyzeScore(int score);
int main() {
    int score;
    cin >> score;
    analyzeScore(score);
    cout << "The score is effective!\n" << endl;
 }
void analyzeScore(int score) {
    assert(score >= 0);
    assert(score <= 100);
}
