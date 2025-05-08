// class Pattern {
//     public static void main(String[] args) {
//         int n = 4;
//         int m = 5;
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= m; j++) {
//                 if (i == 1 || j == 1 || i == n || j == m) {
//                     System.out.print("*"); 
//                 } else {
//                     System.out.print(" "); 
//                 }
//             }
//             System.out.println(); 
//         }
//     }
// }

// Diamond Pattern
// import java.util.Scanner;

//         class DiamondPattern {
//             public static void main(String[] args) {
//                 Scanner sc = new Scanner(System.in);
//                 System.out.print("Enter the number of rows: ");
//                 int n = sc.nextInt();
//                 for (int i = 1; i <= n; i++) {
//                     for (int j = i; j < n; j++) {
//                         System.out.print(" ");
//                     }
//                     for (int j = 1; j <= (2 * i - 1); j++) {
//                         System.out.print("*");
//                     }
//                     System.out.println();
//                 }
//                 for (int i = n - 1; i >= 1; i--) {
//                     for (int j = n; j > i; j--) {
//                         System.out.print(" ");
//                     }
//                     for (int j = 1; j <= (2 * i - 1); j++) {
//                         System.out.print("*");
//                     }
//                     System.out.println();
//                 }
//             }
//         }


// Maratha flag
// class MarathaFlag {
//     public static void main(String[] args) {
//         int height = 10; // Height of the flag

//         // Printing the triangular saffron flag
//         for (int i = 1; i <= height; i++) {
//             for (int j = 1; j <= i; j++) {
//                 System.out.print("\033[38;5;208m*\033[0m"); // Saffron Color
//             }
//             System.out.println();
//         }

//         // Printing the flagpole
//         for (int i = 0; i < 5; i++) {
//             System.out.println("||");
//         }
//     }
// }

// class One {
//     public static void main(String[] args) {
//         int n = 4;
//         for (int i=1; i<=n; i++) {
//             for (int j=1; j<=i; j++){
//                 System.out.print("* ");
//             }
//             System.out.println();
            
//         }
//     }
// }

// class One {
//     public static void main(String[] args) {
//         int n = 4;
//         for (int i=n; i>=1; i--) {
//             for (int j=1; j<=i; j++){
//                 System.out.print("* ");
//             }
//             System.out.println();
            
//         }
//     }
// }

class One {
    public static void main(String[] args) {
        int n = 4;
        for (int i = 1; i <= n; i++) { // Loop for rows
            for (int j = 1; j <= n - i; j++) { // Print spaces
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) { // Print stars
                System.out.print("*");
            }
            System.out.println(); // Move to the next line
        }
    }
}
 