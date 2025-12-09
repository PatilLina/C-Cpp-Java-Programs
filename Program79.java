/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckPerfect
//  Description :   Accept Number from user CheckPerfect Numbers of that number      
//  Input :         Boolean
//  Output :        Boolean
//  Author :        Lina vijay patil
//  Date :          7/11/2025
//
////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class Number
{
    public boolean CheckPerfect(int iNo)
    {
        int i = 0;

        for(i = 1; i <= (iNo / 2); i++)
        {
            if((iNo % i) == 0)
            {
                System.out.println(i);
            }
        }
    }
} 
// End of Number

class Program79
{
    public static void main(String A[])
    {
        int iValue = 0;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();
        
        Number nobj = new Number();
        bRet = nobj.CheckPerfect(iValue); 

        if(bRet == true)
        {
            System.out.println(iValue+" is perfect number");
        }
        else
        {
            System.out.println(iValue+" is not a perfect number");
        }

        // Important
        
        sobj = null;
        nobj = null;

        System.gc();
    }
}