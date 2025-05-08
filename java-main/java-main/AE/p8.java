class RotateArray {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        int N = arr.length;
        int D = 2; 
        int[] temp = new int[D];
        for (int i = 0; i < D; i++) {
            temp[i] = arr[i];
        }
        for (int i = D; i < N; i++) {
            arr[i - D] = arr[i];
        }
       for (int i = 0; i < D; i++) {
            arr[N - D + i] = temp[i];
        }
        for (int i = 0; i < N; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}

