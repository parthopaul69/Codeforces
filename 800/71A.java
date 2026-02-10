import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        String[] s = new String[n];
        for (int i = 0; i < n; i++) {
            s[i] = sc.nextLine();
        }
        for (int i = 0; i < n; i++) {
            if (s[i].length() - 1 < 10) {
                System.out.println(s[i]);
            } else {
                int x = s[i].length();
                System.out.println(s[i].charAt(0) + "" + (x - 2) + "" + s[i].charAt(x - 1));
            }
        }
        sc.close();
    }
}
