
public class MultidimensionalArrays
{
    public static void main(String[] args)
    {
        int [][] flats;
        flats = new int[2][4];

        flats[0][0] = 101;
        flats[0][1] = 102;
        flats[0][2] = 103;
        flats[0][3] = 104;

        flats[1][0] = 201;
        flats[1][1] = 202;
        flats[1][2] = 203;
        flats[1][3] = 204;

        System.out.println("\nprinting 2-D array...........");
        for(int i = 0; i<2; i++)
        {
            for(int j = 0; j<4; j++)
            {
                System.out.print(flats[i][j] + " ");
            }
            System.out.print("\n");
        }

        int [][][] array3D;
        array3D = new int [2][3][3];
        array3D[0][0][0] = 11;
        array3D[0][0][1] = 12;
        array3D[0][0][2] = 13;

        array3D[0][1][0] = 21;
        array3D[0][1][1] = 22;
        array3D[0][1][2] = 23;

        array3D[0][2][0] = 31;
        array3D[0][2][1] = 32;
        array3D[0][2][2] = 33;

        array3D[1][0][0] = 41;
        array3D[1][0][1] = 42;
        array3D[1][0][2] = 43;

        array3D[1][1][0] = 51;
        array3D[1][1][1] = 52;
        array3D[1][1][2] = 53;

        array3D[1][2][0] = 61;
        array3D[1][2][1] = 62;
        array3D[1][2][2] = 63;

        System.out.println("\nprinting 3-D array...........");
        for(int i = 0; i<2; i++)
        {
            for(int j = 0; j <3; j++)
            {
                for(int k = 0; k<3; k++)
                {
                    System.out.print(array3D[i][j][k] + " ");
                }
                System.out.print("\n");
            }
            System.out.print("\n");
        }

    }
}