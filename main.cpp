// C++ program to reverse a string
#include <bits/stdc++.h>
using namespace std;

// Function to reverse words*/
void reverseWords(string str)
{

    int n = str.size();
    for(int i = 0; i<n; i++)
    {
        if(str[i] == " ")
            result[i] = ' ';
    }

}

// Driver Code
int main()
{
    string s = "The quick brown fox jumps over the lazy dog.";
    reverseWords(s);
    return 0;
}
