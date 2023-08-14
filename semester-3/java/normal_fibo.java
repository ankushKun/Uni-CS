class normal_fibo {
    static int n1 = 0, n2 = 1, n3, i;

    public static void main(String args[]) {
        System.out.print(n1 + " " + n2);

        for (i = 2; i < 8; ++i) {
            n3 = n1 + n2;
            System.out.print(" " + n3);
            n1 = n2;
            n2 = n3;
        }

    }
}
