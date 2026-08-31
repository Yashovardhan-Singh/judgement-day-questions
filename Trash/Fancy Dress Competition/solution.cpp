#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;cin>>n;
    vector<ll> nums(n);
    
    for(auto &i:nums) cin>>i;
    
	ll minv = nums[0];
	ll maxv = nums[0];

	ll cur_max = nums[0];
	ll cur_min = nums[0];
	ll tot = nums[0];

	for(int i=1; i<n; i++) {
		tot += nums[i];

		cur_max = max(nums[i],cur_max+nums[i]);
		cur_min = min(nums[i],cur_min+nums[i]);

		maxv = max(maxv,cur_max);
		minv = min(minv,cur_min);
	}

	if(minv==tot) cout<<maxv<<endl;
	else cout<< max(maxv,tot-minv)<<endl;
}
