import java.io.*;
class Demo{
        public static void main(String[]args)throws IOException{
                InputStreamReader isr = new InputStreamReader(System.in);
                BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

                String str = br.readLine();
                System.out.println("String="+ str);

                char ch = (char)isr.read();
                System.out.println("char="+ ch);
        }
}

