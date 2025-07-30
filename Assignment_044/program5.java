// Accept a matrix and swap the consecutive rows
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

    Output : 

            -----------------
            | 4 | 3 | 2 | 2 |
            -----------------
            | 3 | 2 | 5 | 9 |
            -----------------
            | 3 | 9 | 7 | 5 |
            -----------------
            | 8 | 4 | 1 | 5 |
            -----------------

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

        System.out.println();

    }

    public void SwapRows()
    {
        int i = 0, j = 0, iSum = 0;
        int iSwap1 = 0, iSwap2 = 0, q = 0;        

        for(i = 0, q = 1; i < Arr.length; i++,q++)
        {
            for(j = 0, iSum = 0; j < Arr[i].length; j++)
            {
                if(i % 2 == 0)
                {
                    iSwap1 = Arr[i][j];
                    iSwap2 = Arr[q][j];

                    Arr[q][j] = iSwap1;
                    Arr[i][j] = iSwap2; 
                }
                System.out.print(Arr[i][j]+"\t");
            }

            System.out.println();
        }
        
    }
}
class program5
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

        mobj.SwapRows();
    }
}