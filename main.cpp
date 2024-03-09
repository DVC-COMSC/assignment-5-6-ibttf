
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = N-i-1; j < N; j++) 
            cout << i << "," << j << endl;
        }
    }   

