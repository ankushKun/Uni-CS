import java.util.*;
import java.io.*;
import java.net.*;

public class server {
    public static void main(String[] args) throws IOException {
        ServerSocket ss = new ServerSocket(8000);
        Socket s = ss.accept();

        Thread inputThread = new Thread(() -> {
            try {
                DataInputStream dis = new DataInputStream(s.getInputStream());
                String s1 = "";
                while (!s1.equals("stop")) {
                    s1 = dis.readUTF();
                    System.out.println("Client said: " + s1);
                }
                dis.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        });

        Thread outputThread = new Thread(() -> {
            try {
                DataOutputStream dos = new DataOutputStream(s.getOutputStream());
                BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
                String s2 = "";
                while (!s2.equals("stop")) {
                    s2 = br.readLine();
                    dos.writeUTF(s2);
                    dos.flush();
                }
                dos.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        });

        inputThread.start();
        outputThread.start();

        try {
            inputThread.join();
            outputThread.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        s.close();
        ss.close();
    }
}

