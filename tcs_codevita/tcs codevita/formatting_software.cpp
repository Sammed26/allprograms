#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

int main() {
    // Read the number of matrices and their dimensions
    int N, r, c;
    cin >> N >> r >> c;
    cin.ignore(); // Ignore newline after reading dimensions

    // Initialize the 3D vector to store matrices
    vector<vector<vector<int>>> matrices(N, vector<vector<int>>(r, vector<int>(c)));

    // Read matrices
    for (int i = 0; i < N; i++) {
        string line;
        getline(cin, line);
        istringstream rowStream(line);
        vector<int> elements;
        int value;
        while (rowStream >> value) {
            elements.push_back(value);
        }

        if (elements.size() != r * c) {
            cerr << "Error: Matrix " << i + 1 << " does not have the correct number of elements." << endl;
            return 1;
        }

        int index = 0;
        for (int j = 0; j < r; j++) {
            for (int k = 0; k < c; k++) {
                matrices[i][j][k] = elements[index++];
            }
        }
    }

    // Read instructions
    vector<vector<int>> instructions;
    string line;
    while (getline(cin, line)) {
        if (!line.empty()) {
            istringstream lineStream(line);
            vector<int> instruction;
            int matrixIndex;
            while (lineStream >> matrixIndex) {
                if (matrixIndex < 1 || matrixIndex > N) {
                    cerr << "Error: Instruction references invalid matrix index " << matrixIndex << "." << endl;
                    return 1;
                }
                instruction.push_back(matrixIndex);
            }
            instructions.push_back(instruction);
        }
    }

    // Process instructions and generate output
    for (const auto& instruction : instructions) {
        for (int matrixIndex : instruction) {
            const auto& matrix = matrices[matrixIndex - 1]; // Convert 1-based index to 0-based
            for (const auto& row : matrix) {
                for (int value : row) {
                    cout << value << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}
