/*
Little Hi and Little Ho are playing a drinking game called HIHO. The game comprises N rounds. Each round, Little Hi pours T milliliter of water into Little Ho's cup then Little Ho rolls a K-faces dice to get a random number d among 1 to K. If the remaining water in Little Ho's cup is less than or equal to d milliliter Little Hi gets one score and Little Ho drinks up the remaining water, otherwise Little Ho gets one score and Little Ho drinks exactly d milliliter of water from his cup. After N rounds who has the most scores wins.

Here comes the problem. If Little Ho can predict the number d of N rounds in the game what is the minimum value of T that makes Little Ho the winner? You may assume that no matter how much water is added, Little Ho's cup would never be full.
*/

#include <iostream>
using namespace std;

int f(int t,int n,int * d)
{
	int rest=0;
	int score=0;
	for (int i=0;i<n;i++)
	{
		rest=rest+t;
		if (rest > d[i])
		{
			score = score +1;
			rest=rest - d[i];
		}
		else rest=0;
	}
	return score;
}


int main()
{
	int n,k;
	cin>>n>>k;
	int * a=new int [n];
	for (int i=0;i<n;i++)
		cin>>a[i];
	int left=0;
	int right=k+1;
	int mid;

	while ((left+1) <right)
	{
		mid=(left+right) /2;
		if (f(mid,n,a)<=(n/2)) left=mid;
		else right=mid;
	}
	cout<<right;
    cin>>n;
	delete[] a;
	return 0;

}