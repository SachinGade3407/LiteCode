//WAP to print the elements whose addition of digits is even.

class Demo {
public static void main (String [] args) {
        int arr [] = {1, 2, 3, 5, 15, 16, 14, 28, 17, 29, 123};
        int evnaddnarr [] = new int [arr.length];
        for (int i=0; i<arr.length; i++) {
                int num = arr[i], store=0;
                while (num !=0) {
                int rem=0;
                rem = num%10;
                store = store+rem;
                num = num/10;
                }
                 if (store %2 == 0) {
                        evnaddnarr[i] = arr[i];

                }
        }

        for (int i=0; i<evnaddnarr.length; i++) {
                if (evnaddnarr[i] != 0) {
                        System.out.println(evnaddnarr [i] + "  ");
                }
        }
}
}

