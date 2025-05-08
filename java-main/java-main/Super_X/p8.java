/* Take the size of the array from user create two array of that size Initialize all second array element as zero(0).For the first array take all element from the user.Chech if the element in the first array create even or not if its even then replace the value of  the second array of that index with 1  and print both the array.*/

import java.util.Scanner;

class ArrayEvenCheck {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int size = scanner.nextInt();

        int[] array1 = new int[size];
        int[] array2 = new int[size];

        System.out.println("Enter elements for array1:");
        for (int i = 0; i < size; i++) {
            array1[i] = scanner.nextInt();
            if (array1[i] % 2 == 0) {
                array2[i] = 1;
            }
        }

        System.out.println("Array1 elements: ");
        for (int i = 0; i < size; i++) {
            System.out.print(array1[i] + " ");
        }

        System.out.println("\nArray2 elements: ");
        for (int i = 0; i < size; i++) {
            System.out.print(array2[i]);
        }

        scanner.close();
    }
}

