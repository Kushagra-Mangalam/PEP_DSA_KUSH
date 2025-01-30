#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void displayMovieDetails(int rating) {
    cout << "Rating: " << setw(7) << rating << "/10" << endl;

    if (rating <= 5) {
        cout << "Category:" << setw(11) << "Poor" << endl;
    } else if (rating <= 7) {
        cout << "Category:" << setw(11) << "Average" << endl;
    } else {
        cout << "Category:" << setw(11) << "Excellent" << endl;
    }

    cout << endl;
}

int main() {
    int N;
    cin >> N;

    vector<int> ratings(N);
    for (int i = 0; i < N; ++i) {
        cin >> ratings[i];
    }

    for (int i = 0; i < N; ++i) {
        displayMovieDetails(ratings[i]);
    }

    return 0;
}
