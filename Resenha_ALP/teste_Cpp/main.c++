#include <iostream>
#include <memory>
#include <time.h>
using namespace std;

class TestModel
{
private:
    unique_ptr<TestModel> myPtr;

public:
    TestModel(int count);
    
};

TestModel::TestModel(int count)
{
    if (count > 0)
    {
        count--;
        myPtr = unique_ptr<TestModel>(new TestModel(count));
    }
}

int main()
{
    unique_ptr<TestModel> pTestModel;
    cout << "Press enter to create objs" << endl;
    cin.get();
    clock_t start;
    double runDuration;
    double totalDuration = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "beginning cycle " << i << endl;
        pTestModel = unique_ptr<TestModel>(new TestModel(10000));
        runDuration = 0;
        start = clock();
        pTestModel.reset();
        runDuration = (clock() - start) / (double)CLOCKS_PER_SEC;
        cout << "Run time " << runDuration << " secs" << endl;
        totalDuration += runDuration;
    }
    double avgTime = totalDuration / 10;
    cout << endl;
    cout << "- Done -" << endl
         << endl;
    cout << "Total time " << totalDuration << endl
         << endl;
    cout << "Average time " << avgTime << endl
         << endl;
    cin.get();
}
