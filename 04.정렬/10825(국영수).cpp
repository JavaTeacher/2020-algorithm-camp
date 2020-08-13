#include <bits/stdc++.h>

using namespace std;
struct Person {
    string name;
    int kor, eng, math;
};

bool cmp(const Person &u, const Person &v) {
    if (u.kor > v.kor) {
        return true;
    } else if (u.kor == v.kor) {
        if (u.eng < v.eng) {
            return true;
        } else if (u.eng == v.eng) {
            if (u.math > v.math) {
                return true;
            } else if (u.math == v.math) {
                return u.name < v.name;
            }
        }
    }
    return false;
}

// 튜플 사용하기
bool cmp2(const Person &u, const Person &v) {
    return make_tuple(-u.kor, u.eng, -u.math, u.name) < make_tuple(-v.kor, v.eng, -v.math, v.name);
}

int main() {
    int n;
    cin >> n;

    vector<Person> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i].name >> a[i].kor >> a[i].eng >> a[i].math;
    }

    sort(a.begin(), a.end(), cmp2);

    for (int i=0; i<n; i++) {
        cout << a[i].name << '\n';
    }

    return 0;
}
