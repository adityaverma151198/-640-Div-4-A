#include<bits/stdc++.h>
using namespace std;
#define MAX 100
void printnumberofdigits(long long int n)
{
    long long int arr[MAX];
    long long int i=0,r=0,l=0;
    while(n!=0)
    {
        r=n%10;
        if (r!=0)
        {
            l++;
        }
        n=n/10;
    }
    cout<<l<<endl;
}
int fun(long long int x,long long int n)
{
    for(long long int i=0;i<n;i++)
    {
        x=x*10;
    }
    return x;
}

void printDigit(long long int N)
{
	long long int arr[MAX];
	long long int i = 0,a=0;
	long long int j, r;
	long long int l=0;
	while (N != 0) {
		r = N % 10;
		arr[i] = r;
		i++;
		N=N/10;
    }
    for (j = i - 1; j > -1; j--) {
		a=fun(arr[j],j+1);
		a=a/10;
        if(a!=0)
        {
            cout<<a<<" ";
        }
	}
}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
    long long int N;
	cin>>N;
    printnumberofdigits(N);
	printDigit(N);
    }
}

