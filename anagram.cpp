
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int t,i,j;
	cin >> t;
	for(i=0;i<t;i++)
	{
	    char s1[10000],s2[10000];
	    int a[26]={0},b[26]={0},num=0;
	    cin>>s1>>s2;
	    for(j=0;s1[j];j++)
	    {
	        a[s1[j]-'a']++;
	    }
	    for(j=0;s2[j];j++)
	    {
	        b[s2[j]-'a']++;
	    }
	    for(j=0;j<26;j++)
	    {
	        num+=abs(a[j]-b[j]);
	    }
	
	    cout <<  num << endl;
	}

}
