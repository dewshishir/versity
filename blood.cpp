#include <bits/stdc++.h>

using namespace std;

struct Student {
    string timestamp;
    string email;
    string birthdate;
    string blood_group;
};

int main() {
    int n;
    cin >> n;
    vector<Student> students(n);
    map<string, int> blood_group_count;
    map<int, int> birthyear_count;
    for (int i = 0; i < n; i++) {
        cin >> students[i].timestamp;
        cin >> students[i].email;
        cin >> students[i].birthdate;
        cin >> students[i].blood_group;
    }


    map<string, int> email_index;
    for (int i = n - 1; i >= 0; i--) {
        if (email_index.count(students[i].email) == 0) {
            email_index[students[i].email] = i;
        }
    }

    for (auto it : email_index) {
        int i = it.second;
        blood_group_count[students[i].blood_group]++;
    }

    for (auto it : email_index) {
        int i = it.second;
        int year = stoi(students[i].birthdate.substr(6, 4));
        birthyear_count[year]++;
    }

    vector<string> blood_groups = {"A+", "A-", "AB+", "AB-", "B+", "B-", "O+", "O-"};
    for (auto blood_group : blood_groups) {
        cout << blood_group << " ";
        if (blood_group_count.count(blood_group) > 0) {
            cout << blood_group_count[blood_group] << endl;
        } else {
            cout << 0 << endl;
        }
    }


    vector<int> birthyears;
    for (auto it : birthyear_count) {
        birthyears.push_back(it.first);
    }
    sort(birthyears.begin(), birthyears.end());
    for (auto birthyear : birthyears) {
        cout << birthyear << " " << birthyear_count[birthyear] << endl;
    }

    return 0;
}
