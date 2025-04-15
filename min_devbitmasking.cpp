#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> bestTeam;

void findMinimumDevelopers(vector<int>& people, int nskills, int cp, vector<int>& currentTeam, int skillMask) {
    if (cp == people.size()) {
        if (skillMask == ((1 << nskills) - 1)) {
            if (bestTeam.empty() || currentTeam.size() < bestTeam.size()) {
                bestTeam = currentTeam;
            }
        }
        return;
    }
    findMinimumDevelopers(people, nskills, cp + 1, currentTeam, skillMask);
    currentTeam.push_back(cp);
    findMinimumDevelopers(people, nskills, cp + 1, currentTeam, skillMask | people[cp]);
    currentTeam.pop_back();
}

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> skillMap;
    
    for (int i = 0; i < n; i++) {
        string skill;
        cin >> skill;
        skillMap[skill] = i;
    }

    int np;
    cin >> np;
    vector<int> people(np, 0);

    for (int i = 0; i < np; i++) {
        int personSkills;
        cin >> personSkills;
        for (int j = 0; j < personSkills; j++) {
            string skill;
            cin >> skill;
            people[i] |= (1 << skillMap[skill]);
        }
    }

    vector<int> currentTeam;
    findMinimumDevelopers(people, n, 0, currentTeam, 0);

    cout << "Minimum Developers Required: " << bestTeam.size() << endl;
    cout << "Selected Developers: ";
    for (int dev : bestTeam) {
        cout << dev << " ";
    }
    cout << endl;

    return 0;
}
