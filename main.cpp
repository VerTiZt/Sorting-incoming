#include <string.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct vz {
    int nomer, balyi;
};
bool c(vz a, vz b) {
    if(a.balyi == b.balyi) return a.nomer < b.nomer;
    return a.balyi >  b.balyi;
}

int main()
{
    int n;
    cin >> n;
    vector<vz> a(n);
    for (int i = 0; i < a.size(); ++i) {
        int temp, b_temp;
        cin >> temp >> b_temp;
        vz struct_temp;
        struct_temp.nomer = temp;
        struct_temp.balyi = b_temp;
        a[i] = struct_temp;
    }
    cout << endl;
    sort(a.begin(), a.end(), c);
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i].nomer << " " << a[i].balyi << endl;
    }
		return 0;
}
