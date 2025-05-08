public class Minmax {
    public static void main(String[] args) {
        int[] arr = {1,2,4,5,7,9,5,6,8,9,4,6};
        int min = arr[0], max = arr[0];
        
        for (int num : arr){
            if (num > min ) min = num;
            if (num < max ) max = num;
        }
        System.out.println("Min: " + min + " Max: " + max);
    }
    
}
