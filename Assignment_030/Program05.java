//TO check 1st & 32th bit is ON or OFF

import java.util.Scanner;

class Bitwise
{
    public boolean CheckBit(long iNo)
    {
        long iMask = 2147483649L;
        long iResult = 0;

        iResult = iNo & iMask;

        return(iResult == iMask);
    }
}

class Program05
{
    public static void main(String A[])
    {
        long iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number : ");
        iValue = sobj.nextLong();

        Bitwise bobj = new Bitwise();

        boolean bRet = false;

        bRet = bobj.CheckBit(iValue);

        if(bRet == true)
        {
            System.out.println("1st & 32th Bit is ON");
        }
        else
        {
            System.out.println("1st & 32th Bit is OFF");
        }
    }
}
