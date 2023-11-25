#include <iostream>
#include <vector>

using namespace std;

struct Project {
    int expenditure;
    int completionBonus;
    int rewardPenalty;
};

bool compareProjects(const Project &a, const Project &b) {
    return (a.completionBonus - a.rewardPenalty) > (b.completionBonus - b.rewardPenalty);
}

void sortProjects(vector<Project>& projects) {
    for (size_t i = 0; i < projects.size() - 1; ++i) {
        for (size_t j = i + 1; j < projects.size(); ++j) {
            if ((projects[i].completionBonus - projects[i].rewardPenalty) < (projects[j].completionBonus - projects[j].rewardPenalty)) {
                swap(projects[i], projects[j]);
            }
        }
    }
}

int minimumPerfectBudget(vector<Project>& projects) {
    sortProjects(projects);

    int budget = 0;
    int balance = 0;

    for (const auto& project : projects) {
        balance += project.expenditure;
        budget = max(budget, balance + project.completionBonus);
    }

    return budget;
}

int main() {
    int numProjects;
    cin >> numProjects;

    vector<Project> projects(numProjects);

    for (int i = 0; i < numProjects; ++i) {
        cin >> projects[i].expenditure >> projects[i].completionBonus >> projects[i].rewardPenalty;
    }

    int minBudget = minimumPerfectBudget(projects);
    cout << minBudget << endl;

    return 0;
}
