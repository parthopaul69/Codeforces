import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long m = sc.nextLong();
        long n = sc.nextLong();
        long a = sc.nextLong();
        long res = ((m + a - 1) / a) * ((n + a - 1) / a);
        System.out.println(res);
        sc.close();
    }
}