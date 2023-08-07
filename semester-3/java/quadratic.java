import java.util.Scanner;

class quadratic {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int a, b, c;
        System.out.print("Enter value of a: ");
        a = in.nextInt();
        System.out.print("Enter value of b: ");
        b = in.nextInt();
        System.out.print("Enter value of c: ");
        c = in.nextInt();

        int d = b * b - 4 * a * c;

        System.out.println("D = " + d);
        if (d < 0) {
            System.out.println("Real Solutions exist");
        } else {
            System.out.println("Real Solutions don't exist");
        }
    }
}
