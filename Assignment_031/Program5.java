import java.util.Scanner;

class Bitwise
{
    public int ONBit(int iNo)
    {
        int iMask = 8;  
        int iResult = 0;

        iResult = iNo | iMask;  // Here only | can be applied ^ will toggle the bit

        return iResult;
    }

}
class Program5
{
    public static void main(String A[])
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        Bitwise bobj = new Bitwise();

        int iRet = 0;

        iRet = bobj.ONBit(iValue);

        System.out.println("Updated Number is : "+iRet);

        sobj = null;
        bobj = null;


    }
}