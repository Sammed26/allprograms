import java.util.*;

public class formatting_software
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        //read the number of matrices
        int N = scanner.nextInt();
        
        // read the dimentions of each matrics
        int r = scanner.nextInt();
        int c = scanner.nextInt();

        scanner.nextLine();

        // read all the matrices data
        int[][][] matrices = new int[N][r][c];

        for(int i = 0; i<r; i++)
        {
            String [] row = scanner.nextLine().split(" ");

            for(int j = 0; j<N; j++)
            {
                for(int k = 0; k<c; k++)
                {
                    matrices[j][i][k]= Integer.parseInt(row[j*c+k]);
                }
            }
        }

        List<List<Integer>> instructions = new ArrayList<>();
        while(scanner.hasNextLine())
        {
            String line = scanner.nextLine().trim();

            if(!line.isEmpty())
            {
                List<Integer> instruction = new ArrayList<>();
                String[] tokens = line.split(" ");

                for(String token: tokens)
                {
                    instruction.add(Integer.parseInt(token));
                }

                instructions.add(instruction);

            }
        }

        scanner.close();

        // process each instruction

        StringBuilder output = new StringBuilder();

        for(List<Integer> instruction: instructions)
        {
            for(int matrixIndex: instruction)
            {
                int [][]matrix = matrices[matrixIndex-1];
                
                for(int []row : matrix)
                {
                    for(int value : row)
                    {
                        output.append(value).append(" ");
                    }

                    output.deleteCharAt(output.length() - 1);
                    output.append("\n");
                }
            }
        }

        // print the final output

        System.out.print(output.toString());
    }
}

