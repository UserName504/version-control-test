#include <iostream>
#include <chrono>
#include <ctime> 

using namespace std;

int main()
{
	auto right_now = chrono::system_clock::now();
    time_t output = chrono::system_clock::to_time_t(right_now);
    cout << "Compiled on: " << ctime(&output);
	return 0;
}