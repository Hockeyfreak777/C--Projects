#include<vector>
#include<thread>
#include<string>
#include<iostream>
#include<mutex>

using namespace std;

struct Counter
{
	mutex mutex;
	int value;
	Counter() :value(0){}
	void increment()
	{
		mutex.lock();
		++value;
		mutex.unlock();
	}
};
int main()
{
	Counter counter;
	vector<thread> threads;

	for (int i = 0; i < 5; ++i)

	{
		threads.push_back(thread([&counter]()
		{
			for (int i = 0; i < 5000; ++i)
			{
				counter.increment();
			}
		}));
	}
	for (auto & thread : threads)
	{
		thread.join();
	}
	cout << counter.value << endl;
	system("pause");
	return 0;
}
