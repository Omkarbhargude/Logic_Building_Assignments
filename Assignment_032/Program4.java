import java.util.Scanner;

class Bitwise
{
    public int ToggleBit(int iNo, int iPos)
    {
        int iMask = 1;
        int iResult = 0;

        iMask = iMask << iPos-1;
        iResult = iNo ^ iMask;

       return iResult;
    }
}
class Program4
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

        int iRet = 0;

        iRet = bobj.ToggleBit(iValue,iLocation);

        System.out.println("Updated Number is : "+iRet);

    }
}