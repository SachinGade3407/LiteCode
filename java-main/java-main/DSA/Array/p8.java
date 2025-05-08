import java.util.Arrays;

class ArrayRotation {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        int rotationSteps = 3; 

        System.out.println("Original Array: " + Arrays.toString(arr));
        
        int[] rotatedArr = new int[arr.length];
        
        for (int i = 0; i < arr.length; i++) {
            int newPosition = (i + rotationSteps) % arr.length; 
	    rotatedArr[newPosition] = arr[i]; 
        }

        System.out.println("Rotated Array: " + Arrays.toString(rotatedArr));
    }
}

