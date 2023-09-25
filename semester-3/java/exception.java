import java.util.*;

class exception{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String names[] = new String[5];
        int marks[] = new int[5];

        int i=0;
        try{
        while(true){
            System.out.print("Enter name: ");
            names[i] = sc.nextLine();
            System.out.print("Enter marks: ");
            marks[i] = sc.nextInt();
            sc.nextLine();
            i++;
        }
        }catch(Exception e){
            System.out.println("Array space exhausted");
            for(int j=0;j<i;j++){
                System.out.println(names[j]+" "+marks[j]);
            }
        }
    }
}
