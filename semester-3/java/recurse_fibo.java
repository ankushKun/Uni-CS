import java.util.Scanner;

class recurse_fibo {
    static int n1 = 0, n2 = 1, n3 = 0;

    static void fibo(int n) {
        if (n > 0) {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
            System.out.print(" " + n3);
            fibo(n - 1);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of terms: ");
        int n = sc.nextInt();
        if(n<=0) {
            System.out.println("Invalid input");
        }
        else if(n==1) {
            System.out.println(n1);
        }
        else if(n==2) {
            System.out.println(n1 + " " + n2);
        }
        else {
            System.out.print(n1 + " " + n2);
            fibo(n-2);
        }
    }
}
