/*To check whether 15th bit is ON or OFF
  Static program
  I/P : 131072 O/P :- OFF
  I/P : 147456 O/P :- On
*/

import java.util.Scanner;


class Bitwise
{
    public boolean CheckBit(int iNo)
    {
        int iMask = 16384; // 15th position
        int iResult = 0;

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
class Program01
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
            System.out.println("15th Bit is ON");
        }
        else
        {
            System.out.println("15th Bit is OFF");
        }
    }
}
