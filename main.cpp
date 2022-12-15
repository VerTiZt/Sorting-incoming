#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
//#include <fstream>
//ifstream("1.txt"); f >> a[i];
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
//3
//101 80
//305 90
//200 14
//Во время проведения олимпиады каждый из участников получил свой идентификационный номер.Необходимо отсортировать список участников олимпиады по количеству набранных ими баллов.
//
//Формат входных данных :
//На первой строке дано число n(1 ≤ n ≤ 1000) – количество участников.На каждой следующей строке даны идентификационный номер и набранное число баллов соответствующего участника.
//Все числа во входном файле целые и не превышают 10 ^ 5.
//
//Формат выходных данных :
//Выведите исходный список в порядке убывания баллов.Если у некоторых участников одинаковые баллы, то их нужно отсортировать в порядке возрастания идентификационного номера.
