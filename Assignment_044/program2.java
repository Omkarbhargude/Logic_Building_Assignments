// Accept a matrix and a Number and count the frequency of that number in matrix
/*
    Input :
            9 

            -----------------
            | 3 | 2 | 5 | 9 |
            -----------------
            | 4 | 3 | 2 | 2 |
            -----------------
            | 8 | 4 | 1 | 5 |
            -----------------
            | 3 | 9 | 7 | 5 |
            -----------------

    Output : 9 appeared 2 time

*/

import java.util.*;

class Matrix
{
    private int Arr[][], iNo;

    public Matrix(int A, int B, int C)
    {
        Arr = new int[A][B];
        this.iNo = C;
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

    public int CountFrequency()
    {
        int i = 0, j = 0, iCount = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(Arr[i][j] == iNo)
                {
                    iCount++;
                }
            }
        }

        return iCount;
    }
}
class program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iRow = 0, iCol = 0;

        System.out.println("Enter the number of Rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter the number of columns : ");
        iCol = sobj.nextInt();

        System.out.println("Enter a number : ");
        int iValue = sobj.nextInt();

        Matrix mobj = new Matrix(iRow,iCol,iValue);

        mobj.Accept();
        mobj.Display();

        int iRet = mobj.CountFrequency();
    
        System.out.println(iValue+" ouccered "+iRet+" number of time in matrix");

    }
}