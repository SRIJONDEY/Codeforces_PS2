#include <bits/stdc++.h>      
// Includes all standard C++ libraries (vector, string, iostream, etc.)

using namespace std;         
// Allows us to write 'cout' instead of 'std::cout', 'vector' instead of 'std::vector'

int main() {                
// Program execution starts here

    int r, c;               
    // r = number of rows in the cake
    // c = number of columns in the cake

    cin >> r >> c;          
    // Read r and c from input

    vector<string> cake(r);
    // Create a vector of strings to store the cake
    // Each string represents one row of the cake

    for (int i = 0; i < r; i++) {
        cin >> cake[i];
        // Read each row of the cake
        // Example: "S..." or "...."
    }

    vector<vector<bool>> eaten(r, vector<bool>(c, false));
    // 2D array to remember which cells are already eaten
    // eaten[i][j] = false → cell not eaten yet
    // eaten[i][j] = true  → cell already eaten

    int answer = 0;
    // This variable will store the total number of eaten cells

    // -------------------- STEP 1: EAT SAFE ROWS --------------------

    for (int i = 0; i < r; i++) {
        // Loop through each row

        bool safe = true;
        // Assume the row is safe (no 'S') at the beginning

        for (int j = 0; j < c; j++) {
            // Check every cell in the current row

            if (cake[i][j] == 'S') {
                // If any cell contains an evil strawberry

                safe = false;
                // Mark the row as unsafe

                break;
                // Stop checking this row (no need to check further)
            }
        }

        if (safe) {
            // If the row has NO 'S', it is safe to eat

            for (int j = 0; j < c; j++) {
                // Go through every cell in this safe row

                if (!eaten[i][j]) {
                    // If this cell has NOT been eaten before

                    eaten[i][j] = true;
                    // Mark the cell as eaten

                    answer++;
                    // Increase the count of eaten cells
                }
            }
        }
    }

    // -------------------- STEP 2: EAT SAFE COLUMNS --------------------

    for (int j = 0; j < c; j++) {
        // Loop through each column

        bool safe = true;
        // Assume the column is safe

        for (int i = 0; i < r; i++) {
            // Check every cell in the current column

            if (cake[i][j] == 'S') {
                // If an evil strawberry is found

                safe = false;
                // Column is unsafe

                break;
                // Stop checking this column
            }
        }

        if (safe) {
            // If the column has NO 'S', it is safe to eat

            for (int i = 0; i < r; i++) {
                // Go through each cell in this safe column

                if (!eaten[i][j]) {
                    // If the cell was not already eaten by a row

                    eaten[i][j] = true;
                    // Mark the cell as eaten

                    answer++;
                    // Count this newly eaten cell
                }
            }
        }
    }

    cout << answer << endl;
    // Print the maximum number of cake cells that can be eaten

    return 0;
    // End of program
}
