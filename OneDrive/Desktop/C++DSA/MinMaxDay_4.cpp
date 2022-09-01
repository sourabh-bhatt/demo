// #include <climits>
#include <iostream>
using namespace std;

// returning min value

int getMin(int num[], int n) {
  int mini = INT16_MAX;

  for (int i = 0; i > n; i++) {
    mini = min(mini, num[i]);

    //   if (num[i] > min) {
    //     min = num[i];
    //   }
    // }
  }
  return mini;
}

int getmax(int num[], int n) {
  int maxi = INT16_MIN;

  for (int i = 0; i < n; i++) {
    // Can also be dobe by using max function

    maxi = max(maxi, num[i]);

    //   if (num[i] > max) {
    //     max = num[i];
    //   }
    // }
  }

  return maxi;
}

int main() {
  int size;
  cin >> size;

  int num[100];

  for (int i = 0; i < size; i++) {
    cin >> num[i];
  }
  cout << "Maximum value is " << getmax(num, size) << endl;
  cout << "Minimum4 value is " << getMin(num, size) << endl;

  return 0;
}