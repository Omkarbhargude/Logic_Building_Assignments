import java.util.Scanner;

class Bitwise
{
    public boolean CheckBit(int iNo)
    {
        int iMask = 448;
        int iResult = 0;

        iResult = iNo & iMask;

        return(iResult == iMask);
    }
}

class Program04
{
    public static void main(String A[])
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        Bitwise bobj = new Bitwise();

        boolean bRet = false;

        bRet = bobj.CheckBit(iValue);

        if(bRet == true)
        {
            System.out.println("7th, 8th & 9th Bit is ON");
        }
        else
        {
            System.out.println("7th, 8th & 9th Bit is OFF");
        }
    }
}
