#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <unordered_set>

using namespace std;

const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

bool isValid(int x, int y, int r, int c, vector<vector<char>>& house) {
    return x >= 0 && y >= 0 && x < r && y < c && house[x][y] != 'H';
}

bool isValidSofaPosition(int x1, int y1, int x2, int y2, int r, int c, vector<vector<char>>& house) {
    return isValid(x1, y1, r, c, house) && isValid(x2, y2, r, c, house);
}

bool canRotate(int x1, int y1, int x2, int y2, int r, int c, vector<vector<char>>& house) {
    
    if (x1 == x2 && y1 + 1 == y2) { // Horizontal sofa
        return isValid(x1 - 1, y1, r, c, house) && isValid(x1 - 1, y2, r, c, house) &&
               isValid(x2 + 1, y1, r, c, house) && isValid(x2 + 1, y2, r, c, house);
    } else if (y1 == y2 && x1 + 1 == x2) { // Vertical sofa
        return isValid(x1, y1 - 1, r, c, house) && isValid(x1, y1 + 1, r, c, house) &&
               isValid(x2, y2 - 1, r, c, house) && isValid(x2, y2 + 1, r, c, house);
    }
    return false;
}

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<char>> house(m, vector<char>(n));
    tuple<int, int, int, int> start, end;

   
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> house[i][j];
            if (house[i][j] == 's') {
                start = make_tuple(i, j, i, j + 1); // Sofa starts at (i, j) and (i, j+1)
            } else if (house[i][j] == 'S') {
                end = make_tuple(i, j, i, j + 1); // Target position (i, j) and (i, j+1)
            }
        }
    }

    queue<pair<tuple<int, int, int, int>, int>> q; 
    unordered_set<string> visited; 

    q.push({start, 0});
    visited.insert(to_string(get<0>(start)) + "," + to_string(get<1>(start)) + "," +
                   to_string(get<2>(start)) + "," + to_string(get<3>(start)));

    while (!q.empty()) {
        auto [sofaPos, steps] = q.front();
        q.pop();

        int x1 = get<0>(sofaPos), y1 = get<1>(sofaPos);
        int x2 = get<2>(sofaPos), y2 = get<3>(sofaPos);


        if (x1 == get<0>(end) && y1 == get<1>(end) && x2 == get<2>(end) && y2 == get<3>(end)) {
            cout << steps << endl;
            return 0;
        }

       
        for (int i = 0; i < 4; i++) {
            int nx1 = x1 + dx[i], ny1 = y1 + dy[i];
            int nx2 = x2 + dx[i], ny2 = y2 + dy[i];

            if (isValidSofaPosition(nx1, ny1, nx2, ny2, m, n, house)) {
                string state = to_string(nx1) + "," + to_string(ny1) + "," + to_string(nx2) + "," + to_string(ny2);
                if (visited.find(state) == visited.end()) {
                    visited.insert(state);
                    q.push({make_tuple(nx1, ny1, nx2, ny2), steps + 1});
                }
            }
        }

       
        if (canRotate(x1, y1, x2, y2, m, n, house)) {
          
            int rx1, ry1, rx2, ry2;
            if (x1 == x2 && y1 + 1 == y2) { 
                rx1 = x1, ry1 = y1 + 1;
                rx2 = x2 + 1, ry2 = y2;
            } else {
                rx1 = x1 + 1, ry1 = y1;
                rx2 = x2, ry2 = y2 + 1;
            }

            string state = to_string(rx1) + "," + to_string(ry1) + "," + to_string(rx2) + "," + to_string(ry2);
            if (visited.find(state) == visited.end()) {
                visited.insert(state);
                q.push({make_tuple(rx1, ry1, rx2, ry2), steps + 1});
            }
        }
    }

    cout << "Impossible";
    return 0;
}
