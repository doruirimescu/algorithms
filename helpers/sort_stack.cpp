#include <vector>
using namespace std;

void insertIntoSortedStack(vector<int>& stack, int element)
{
    if(stack.empty())
    {
        stack.push_back(element);
    }
	else if(element >= stack.back())
	{
		stack.push_back(element);
	}
	else
	{
	    int tmp = stack.back();
		stack.pop_back();
		insertIntoSortedStack(stack, element);
		stack.push_back(tmp);
	}
}


vector<int> sortStack(vector<int> &stack)
{
    if(stack.size() <= 1)
    {
        //Yay stack is sorted
    }
    else
    {
        //Take uppest element
        auto tmp = stack.back();
        stack.pop_back();
        //Sort remaining stack
        sortStack(stack);
        //Insert the element back
        insertIntoSortedStack(stack, tmp);
    }
    return stack;
}
