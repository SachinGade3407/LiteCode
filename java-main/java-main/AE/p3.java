import java.util.ArrayList;
import java.util.List;

class FindDuplicates {
    public static void main(String[] args) {
        int[] arr = {0, 3, 1, 2};
        List<Integer> duplicates = findDuplicates(arr);

        if (duplicates.isEmpty()) {
            System.out.println("No duplicates found. Output: [-1]");
        } else {
            System.out.println("Duplicates found. Output: " + duplicates);
        }
    }

    public static List<Integer> findDuplicates(int[] arr) {
        List<Integer> duplicates = new ArrayList<>();

        for (int i = 0; i < arr.length; i++) {
            int index = Math.abs(arr[i]);
            if (arr[index] >= 0) {
                arr[index] = -arr[index];
            } else {
                duplicates.add(index);
            }
        }

        if (duplicates.isEmpty()) {
            duplicates.add(-1);
        }

        return duplicates;
    }
}

