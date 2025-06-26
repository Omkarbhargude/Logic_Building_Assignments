import java.util.Scanner;

class Bitwise
{
    public boolean CheckBit(int iNo, int iPos)
    {
        int iMask = 1;
        int iResult = 0;

        iMask = iMask << iPos-1;
        iResult = iNo & iMask;

        if(iResult == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
class Program1
{
    public static void main(String A[])
    {
        int iValue = 0;
        int iLocation = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter the Position : ");
        iLocation = sobj.nextInt();

        Bitwise bobj = new Bitwise();

        boolean bRet = false;

        bRet = bobj.CheckBit(iValue,iLocation);

        if(bRet == true)
        {
            System.out.println("Bit is ON at Position "+iLocation);
        }
        else
        {
            System.out.println("Bit is OFF at Position "+iLocation);

        }

    }
}