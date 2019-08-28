
//
// HW02-02:  store ints into vector, output N, avg, and the values themselves.
//
// There are the functions to input the integers and compute the average.
//

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

//
// InputData
//
// Inputs 0 or more integers and stores them into the given vector, which is
// passed by reference so it can be modified; the values are stored into
// positions 0, 1, 2, ..., N-1.  The # of values stored in the vector (N) is
// returned.  The input process stops when a negative value is input;
// this negative value is considered a sentinel and is *not* stored in the
// returned vector, nor is it counted as part of the return value.
//
// NOTE: it is assumed the vector has been created with enough space to store
// the complete sequence of input values.
//
int InputData(vector<int>& V)
{

    // TODO
    int counter=0;
    int temp;
    cout << "In InputData" << endl;
    for (int i=0; i < V.size() ; ++i) {
        cin >> temp;
        if (temp >= 0) {
            V.at(i) = temp;
            counter++;
        } else {
            break;
        }

  }

  return counter;
}

//
// GetAverage
//
// Returns the average of the first N values in the vector; if N is 0 then
// 0.0 is returned.
//
double GetAverage(vector<int> V, int N)
{

  // TODO
  cout << "In GetAverage" << endl;
  int temp = 0;
  double answer, x, y;
  for (int i=0; i < N ; ++i) {
    temp = V.at(i) + temp;
    cout << temp << endl;
  }
  x = temp;
  y = N;
  answer = x/y;
  cout << fixed << setprecision(2) << answer << endl;

  return answer;
}
