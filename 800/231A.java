import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[][] y=new int[n][3];
        for(int i=0;i<y.length;i++)
        {
            for(int j=0;j<y[i].length;j++)
            {
                y[i][j]=sc.nextInt();
            }
        }
        int sum,count=0;
        for(int i=0;i<y.length;i++)
        {
            sum=0;
            for(int j=0;j<y[i].length;j++)
            {
                sum=sum+y[i][j];
            }
            if(sum>1)
            {
                count++;
            }
        }
        System.out.println(count);
        sc.close();
    }
}
