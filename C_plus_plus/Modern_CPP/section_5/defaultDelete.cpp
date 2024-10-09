#include "iostream"
#include "string"

using namespace std;

class String
{
    string s;

public:
    String (const string str) : s(str){}
    String(string& s): s(s){}

    string operator+ (const String& arg)
    {
        return s+arg.s;
    }

    void print()
    {
        cout<<s<<endl;
    }
};

int main()
{
    // String w = String("world");
    String wa{"World"}, bang{"!"};
    String wbang = wa + bang;   // calls wa.operator+(bang)

    //here we cannot call like below
    String hi = "hello" + wa; // not possible  to call hello.operator+(wa)

    wbang.print();
}