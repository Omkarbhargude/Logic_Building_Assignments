import java.util.Scanner;

class Bitwise
{
    public int OFFBit(int iNo)
    {
        int iMask = 576;  
        int iResult = 0;

        iResult = iNo ^ iMask;

        return iResult;
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

        int iRet = 0;

        iRet = bobj.OFFBit(iValue);

        System.out.println("Updated Number is : "+iRet);

        sobj = null;
        bobj = null;


    }
}