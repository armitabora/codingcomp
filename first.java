import java.util.*;
class first
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter starting number:");
        int a=sc.nextInt();
        System.out.println("enter ending number:");
        int b=sc.nextInt();
        int i=b-a;
        int factors=0;
        string prime="";
        for(int j=a;j<=b;j++)
        {
            for(int k=1;k<=j;k++)
            {
                if(j%k==0)
                {
                    factors++;
                }
            
            }
            if (factors==2)
            {
                prime=prime+j;
            }

            print(prime);

        }

    }
}