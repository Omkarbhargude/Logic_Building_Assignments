/*To Check Whether 5th & 18th bit is ON or OFF
*/

import java.util.Scanner;

class Bitwise
{
    public boolean CheckBit(int iNo)
    {
        int iMask = 131088;
        int iResult = 0;

        iResult = iNo & iMask ;

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
class Program2
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
            System.out.println("5th & 18th Bit is ON");
        }
        else
        {
            System.out.println("5th & 18th Bit is OFF");
        }
    }
}