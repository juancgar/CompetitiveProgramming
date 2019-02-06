
#include <iostream>
#include <stack>

using namespace std;

void Enqueue(int data, stack<int>& s1);
int main() {

    stack <int> Front,Temp;
    int Cycles;
    cin>>Cycles;

    while(Cycles--)
    {
        int Query, data;
        cin >> Query;
        if(!Temp.empty() && Front.empty())
            {
                while(!Temp.empty())
                {
                    Front.push(Temp.top());
                    Temp.pop();
                }
            }
        if(Query == 1)
        {
            cin >> data;
            Temp.push(data);
        }
        else if(Query == 2 && !Front.empty())
        {
            Front.pop();
        }
        else if(Query == 3 && !Front.empty())
        {
            cout << Front.top() << endl;
        }
        else
        {

        }
        
    }


    return 0;
}