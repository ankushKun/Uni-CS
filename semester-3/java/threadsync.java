import java.util.*;

public class threadsync {
    public static void main(String[] args) {
        // multi threading syncronised
        
        // create a new thred
        Thread t1 = new Thread(new Runnable() {
            @Override
            public void run() {
                // code to run on thread
                for (int i = 0; i < 1000; i++) {
                    System.out.println("Hello: " + i);
                }
            }
        });

        // create a new threading
        Thread t2 = new Thread(new Runnable() {
            @Override
            public void run() {
                // code to run on thread
                for (int i = 0; i < 1000; i++) {
                    System.out.println("Hello: " + i);
                }
            }
        });

        // start the threads

        t1.start();
        t2.start();

        // join the threadsync
        
        try {
            t1.join();
            t2.join();
        } catch (InterruptedException e) {
            }
    }
}
