// Accept a matrix and perform the addition of columns
/*
    Input :

            -----------------
            | 3 | 2 | 5 | 9 |
            -----------------
            | 4 | 3 | 2 | 2 |
            -----------------
            | 8 | 4 | 1 | 5 |
            -----------------
            | 3 | 9 | 7 | 5 |
            -----------------

    Output : 18  18  15 21

*/

import java.util.*;

class Matrix
{
    private int Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new int[A][B];
    }

    public void Accept()
    {
        System.out.println("Please enter the elements in matrix : ");

        Scanner sobj = new Scanner(System.in);

        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements from matrix are : ");

        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }

    }

    public void AddColumns()
    {
        int i = 0, j = 0, iSum = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0, iSum = 0; j < Arr[i].length; j++)
            {
                iSum = iSum + Arr[j][i];
            }

            System.out.print(iSum+"\t");
        }

        System.out.println();

    }
}
class program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iRow = 0, iCol = 0;

        System.out.println("Enter the number of Rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter the number of columns : ");
        iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        mobj.AddColumns();
    }
}