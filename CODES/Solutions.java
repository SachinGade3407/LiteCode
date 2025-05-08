

// public class SecondLargestElements {
//     public static void main(String[] args) {
//         int arr[] = {10, 25, 45, 22, 66};
//         int secondlargest = findSecondLargest(arr);
//         System.out.println(secondlargest);
//     }

//     public static int findSecondLargest(int[] arr) {
//         int largest = Integer.MIN_VALUE;
//         int secondlargest = Integer.MIN_VALUE;
//         for (int i = 0; i < arr.length; i++) {
//             int num = arr[i];
//             if (num > largest) {
//                 secondlargest = largest;
//                 largest = num;
//             } else if (num > secondlargest && num != largest) {
//                 secondlargest = num;
//             }
//         }
//         return secondlargest;
//     }
// }

// 


public class Solutions {
   public static void main(String args[]) {
       int n = 10;
       //upper part
       for(int i=1; i<=n; i++) {
           for(int j=1; j<=i; j++) {
               System.out.print("*");
           }
              int spaces = 2 * (n-i);
           for(int j=1; j<=spaces; j++) {
               System.out.print(" ");
           }    
           for(int j=1; j<=i; j++) {
               System.out.print("*");
           }
           System.out.println();
       }//lower part
       for(int i=n; i>=1; i--) {
           for(int j=1; j<=i; j++) {
               System.out.print("*");
           }
              int spaces = 2 * (n-i);
           for(int j=1; j<=spaces; j++) {
               System.out.print(" ");
           }
           for(int j=1; j<=i; j++) {
               System.out.print("*");
           }
           System.out.println();
       }
   }   
}

