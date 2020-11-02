#include <bits/stdc++.h>
using namespace std;

int deno[] = { 1, 2, 5, 10, 20,
			50, 100, 500, 1000 };
int n = sizeof(deno) / sizeof(deno[0]);

vector<int> calculate(int V)
{
	sort(deno, deno + n);
	vector<int> ans;

	for (int i = n - 1; i >= 0; i--) {

		while (V >= deno[i]) {
			V -= deno[i];
			ans.push_back(deno[i]);
		}
	}
	return ans;
	//for (int i = 0; i < ans.size(); i++)
		//cout << ans[i] << " ";
}

int main()
{
	int n;
	cout<<"Enter the monitory value: ";
	cin>>n;
	cout << "Following is minimal number of change for " << n
		<< ": ";
    vector<int> ans = calculate(n);
	for(auto i: ans)
        cout<<i<<" ";
	cout<<"\nMinimum Denominations required: "<<ans.size();
	return 0;
}
