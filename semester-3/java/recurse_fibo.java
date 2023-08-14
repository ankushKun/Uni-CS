class recurse_fibo {
    static int n1 = 0, n2 = 1, n3 = 0;

    public static void main(String[] args) {
        System.out.print(n1 + " " + n2);
        fibo(8);
    }

    static void fibo(int n) {
        if (n > 0) {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
            System.out.print(" " + n3);
            fibo(n - 1);
        }
    }
}
