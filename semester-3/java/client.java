import java.util.*;
import java.io.*;
import java.net.*;

public class client {
    public static void main(String[] args) throws IOException {
        Socket s = new Socket("localhost", 8000);

        Thread outputThread = new Thread(() -> {
            try {
                DataOutputStream dos = new DataOutputStream(s.getOutputStream());
                BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
                String s1 = "";
                while (!s1.equals("stop")) {
                    s1 = br.readLine();
                    dos.writeUTF(s1);
                    dos.flush();
                }
                dos.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        });

        Thread inputThread = new Thread(() -> {
            try {
                DataInputStream dis = new DataInputStream(s.getInputStream());
                String s2 = "";
                while (!s2.equals("stop")) {
                    s2 = dis.readUTF();
                    System.out.println("Server said: " + s2);
                }
                dis.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        });

        outputThread.start();
        inputThread.start();

        try {
            outputThread.join();
            inputThread.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        s.close();
    }
}

