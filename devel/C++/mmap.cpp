#include <iostream>
#include <map>
#include <utility>

using namespace std;

int main()
{
    multimap<string,string> numbers;
    numbers.insert(pair<string,string>("Usha","3214126531"));
    numbers.insert(pair<string,string>("Vardhan","3214128995"));
    numbers.insert(pair<string,string>("Sanju","3215055596"));
    numbers.insert(pair<string,string>("Usha","3217510836"));
    string name="Usha";
    multimap<string,string>::iterator iter = numbers.find(name);
    multimap<string,string>::iterator last = numbers.upper_bound(name);
    for(;iter != last; ++iter) {
       cout<<iter->first << ":" << iter->second << endl;
    }
    return 0;
}
