import java.util.*;

public class sofa {

    static class State {
        int x, y, orientation;

        // Orientation: 0 = horizontal, 1 = vertical
        State(int x, int y, int orientation) {
            this.x = x;
            this.y = y;
            this.orientation = orientation;
        }
    }

    public static boolean canMove(int[][] grid, int x, int y, int orientation) {
        int rows = grid.length, cols = grid[0].length;

        if (orientation == 0) { // Horizontal
            return x >= 0 && y >= 0 && y + 1 < cols &&
                   grid[x][y] == 0 && grid[x][y + 1] == 0;
        } else { // Vertical
            return x >= 0 && x + 1 < rows && y >= 0 &&
                   grid[x][y] == 0 && grid[x + 1][y] == 0;
        }
    }

    public static int minStepsToMoveSofa(int[][] grid, int[] start, int[] end) {
        int rows = grid.length, cols = grid[0].length;

        // Directions: [dx, dy]
        int[][] directions = {
            {0, 1}, {0, -1}, {1, 0}, {-1, 0} // Right, Left, Down, Up
        };

        Queue<State> queue = new LinkedList<>();
        Set<String> visited = new HashSet<>();

        // Start state
        queue.add(new State(start[0], start[1], 0)); // Initially horizontal
        visited.add(start[0] + "," + start[1] + ",0");

        int steps = 0;

        while (!queue.isEmpty()) {
            int size = queue.size();

            for (int i = 0; i < size; i++) {
                State current = queue.poll();

                // Check if we reached the endpoint
                if ((current.orientation == 0 && current.x == end[0] && current.y == end[1]) ||
                    (current.orientation == 1 && current.x == end[0] && current.y == end[1])) {
                    return steps;
                }

                // Move in all directions
                for (int[] dir : directions) {
                    int nx = current.x + dir[0];
                    int ny = current.y + dir[1];

                    if (canMove(grid, nx, ny, current.orientation)) {
                        String stateKey = nx + "," + ny + "," + current.orientation;
                        if (!visited.contains(stateKey)) {
                            visited.add(stateKey);
                            queue.add(new State(nx, ny, current.orientation));
                        }
                    }
                }

                // Rotate sofa if possible
                int newOrientation = 1 - current.orientation; // Toggle between 0 and 1
                if (canMove(grid, current.x, current.y, newOrientation)) {
                    String rotateKey = current.x + "," + current.y + "," + newOrientation;
                    if (!visited.contains(rotateKey)) {
                        visited.add(rotateKey);
                        queue.add(new State(current.x, current.y, newOrientation));
                    }
                }
            }
            steps++;
        }

        return -1; // No valid path
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read grid dimensions
        System.out.println("Enter the number of rows and columns in the grid:");
        int rows = scanner.nextInt();
        int cols = scanner.nextInt();
        scanner.nextLine(); // Consume the newline character

        // Read the grid
        int[][] grid = new int[rows][cols];
        int[] start = new int[2];
        int[] end = new int[2];
        boolean startFound = false;

        System.out.println("Enter the grid row by row (s for sofa, h for obstacle, 0 for empty):");
        for (int i = 0; i < rows; i++) {
            String[] row = scanner.nextLine().split(",");
            for (int j = 0; j < cols; j++) {
                if (row[j].equals("s")) {
                    grid[i][j] = 0; // Treat the sofa as empty for movement
                    if (!startFound) { // First s encountered is the start
                        start[0] = i;
                        start[1] = j;
                        startFound = true;
                    } else { // Last s encountered is the end
                        end[0] = i;
                        end[1] = j;
                    }
                } else if (row[j].equals("h")) {
                    grid[i][j] = -1; // Obstacle
                } else if (row[j].equals("0")) {
                    grid[i][j] = 0; // Empty space
                }
            }
        }

        // Find minimum steps
        int result = minStepsToMoveSofa(grid, start, end);

        if (result != -1) {
            System.out.println("Minimum steps to move the sofa: " + result);
        } else {
            System.out.println("No valid path exists to move the sofa.");
        }

        scanner.close();
    }
}