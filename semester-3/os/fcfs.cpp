#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the number of processes: ";
  cin >> n;

  int bt[n], wt[n], tat[n], avwt = 0, avtat = 0;
  cout << "Enter the burst time for each process: ";
  for (int i = 0; i < n; i++) {
    cin >> bt[i];
  }

  wt[0] = 0;

  for (int i = 1; i < n; i++) {
    wt[i] = 0;
    for (int j = 0; j < i; j++) {
      wt[i] += bt[j];
    }
  }

  cout << "Process\t\tBurst Time\tWaiting Time\tTurnaround Time\n";

  for (int i = 0; i < n; i++) {
    tat[i] = bt[i] + wt[i];
    avwt += wt[i];
    avtat += tat[i];
    cout << i + 1 << "\t\t" << bt[i] << "\t\t" << wt[i] << "\t\t" << tat[i]
         << endl;
  }

  avwt /= n;
  avtat /= n;
  cout << "Average Waiting Time: " << avwt << endl;
  cout << "Average Turnaround Time: " << avtat << endl;

  return 0;
}
