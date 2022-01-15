#include <map>
using namespace std;

template<class KEY_T>
void find_insert_increment(std::map<KEY_T, int>& m, const KEY_T& key)
{
	if(m.find(key) == m.end())
	{
		m.insert({key, 1});
	}
	else
	{
		m[key]++;
	}
}
