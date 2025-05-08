import java.util.HashMap;
class FirstRepeatingElement {
    public static void main(String[] args) {
        int[] arr = {1, 5, 3, 4, 3, 5, 6};
        int n = arr.length;
        
        HashMap<Integer, Integer> elementIndices = new HashMap<>();

        int firstRepeatingIndex = -1;

        for (int i = 0; i < n; i++) {
            int currentElement = arr[i];

                        if (elementIndices.containsKey(currentElement)) {
                
                if (firstRepeatingIndex == -1 || elementIndices.get(currentElement) < firstRepeatingIndex) {
                    firstRepeatingIndex = elementIndices.get(currentElement);
                }
            } else {
                
                elementIndices.put(currentElement, i);
            }
        }

        if (firstRepeatingIndex != -1) {
		System.out.println("First Repeating Element Index: " + (firstRepeatingIndex + 1));
        } else {
            System.out.println("No repeating elements found.");
        }
    }
}

