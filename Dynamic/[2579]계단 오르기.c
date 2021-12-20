#include<stdio.h>
#include<algorithm>
using namespace std;
int n, a[1001], d[1001][3];

int main(){
	//freopen("2579.txt", "r", stdin); 
	scanf("%d", &n);
	for(int i=1;i<=n;i++) scanf("%d", &a[i]);
	d[1][1]=a[1];
	for(int i=2;i<=n;i++){
	    d[i][1]=max(d[i-2][1], d[i-2][2])+a[i];
        d[i][2]=d[i-1][1]+a[i];		
	}
	printf("%d", max(d[n][1], d[n][2]));


	return 0;
}
