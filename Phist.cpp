#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// THIS FILE CONTAINS MY SUBMISSIONS to CP PROBLEMS


//  sort an array
int main(){
    // print func
    void show(int a[], int array_size)
{
    for (int i = 0; i < array_size; ++i)
        cout << a[i] << " ";
}

    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

    // size of the array
    int asize = sizeof(a) / sizeof(a[0]);
    cout << "The array before sorting is : \n";

    // print the array
    show(a, asize);

      // sort the array
    sort(a, a + asize);

    cout << "\n\nThe array after sorting is :\n";

    // print the array after sorting
    show(a, asize);

    return 0;
}

// Triangle faces : (if-else)
int main(){


    int t, i,cur = 0,sum = 0;
    cin >> t;
    string h;
    string T = "Tetrahedron";
    string C = "Cube";
    string O = "Octahedron";
    string D = "Dodecahedron";
    string I = "Icosahedron";
    for (i=1; i<=t; i++){
        cin >>h;
        if (h == T){
            cur = 4;
        }
        else if (h == C){
            cur = 6;
        }
        else if (h == O){
            cur = 8;
        }
        else if (h == D){
            cur = 12;
        }
        else{ cur = 20;
        }
        sum += cur;
    }
    cout << sum;
    return 0;
}

// Reverse array : (for loop, array i/o)
int main(){
    int n,i = 0;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (i = n-1; i >= 0; i--){
        cout << arr[i] << " " ;
    }

    return 0;
}

// 1&2 som coins : (rounding)
int main(){


// (modulus)

    int t;
    int n;
    int n1;
    int n2;
    int i;
    cin >> t;
    for (i=0;i<t;i++){
        cin >> n;
        n1 = roundl(n/3);
        n2 = n - (n1*2);
        if (n2 - n1 > 1){
                n2-=2;
                n1+=1;
        }
        cout << n2 << ' ' << n1 << endl;

    }

    return 0;
}

// Remainder (modulus)
int main(){
    int n,x,y,k,t;
    int i =0;
    cin >> t;
        for(i=0;i<t;i++){
            cin >> x >> y >> n;
            k = n-y;
            k = k - (k%x);
            cout << k+y << endl;
        }
    return 0;
}

// (long long, array, min-max)
int main(){
    int t,j;
    long long x;
    int i;
    cin >> t;
        for(i=0;i<t;i++){
            cin >> x;
            long long arr[x];
            long long mn = 10e9+5;
            long long mx = 0;
            for (j=0;j<x;j++){
                cin >> arr[j];
                mn = min(mn,arr[j]);
                mx = max(mx,arr[j]);
            }
            cout << mx - mn << endl;
        }
    return 0;
}

// Spy detected (find index of spy)
int main(){

    int a[103];
    int t;
    int n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
		{
			if(a[i]!=a[(i+1)%n]&&a[i]!=a[(i-1+n)%n])
				{
					cout<<i+1<<endl;
					break;
				}
		}
	}
	return 0;
}

//123 seqnc (replace 1,2,3)
int main(){
    int t,m;
    int c1=0;
    int c2=0;
    int c3 =0;
    cin >> t;
    int a[t];
    for ( int i =0; i < t; i++){
    cin >> a[i];
    if ( a[i] == 1){
        c1++;
    }
    else if ( a[i] == 2){
        c2++;
    }else{
    c3++;
    }

}
    m = max(max(c1,c2),c3);
    cout << t - m;
	return 0;
}

// max of 2 arrays
int main(){
    int na,nb;
    cin >> na;
    int a[na];
    int mxa = 0;
    int mxb = 0;
    for (int i = 0; i < na; i++ ){
        cin >> a[i];
        mxa = max(mxa,a[i]);
    }
    cin >> nb;
    int b[nb];
    for (int i = 0; i < nb; i++ ){
        cin >> b[i];
        mxb = max(mxb,b[i]);
    }
    cout << mxa << " " << mxb;
    return 0;
}

// similar pairs, array sorting
int main(){
    int n;
    int c = 0;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }

    sort(a, a + n);

    for (int i=0;i<n;i+=2){
        c += a[i+1]-a[i];
    }

    cout << c;
    return 0;
}

// black or white (on-off)
int main(){
    int n,m,i,j;
    cin >> n >> m ;
    int out = 0;
    int a[105];
    for (i=0; i<n; i++){
            for (j=0; j<m;j++){
                    char b;
                    cin >> b;
                    if (b == 'C' || b == 'M' || b == 'Y'){
                        out = 1;
        }
            }

    }
    if ( out ==0){
        cout << "#Black&White";
    }else{
        cout << "#Color";
    }
}

// 2d vector, tt,
void solv(){
    int n,k;
    cin >> n >> k;
    vector < pair < int,int > > a(n);
    for (int i=0; i<n; i++){
        cin >> a[i].first;
    }
    for (int i=0; i<n; i++){
        cin >> a[i].second;
    }

    sort(a.begin(),a.end());

    for ( int i=0; i < n; i++ ){
        if (a[i].first <= k){
            k += a[i].second;
        }
    }
    cout << k << endl;
}
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        solv();
    }
}
