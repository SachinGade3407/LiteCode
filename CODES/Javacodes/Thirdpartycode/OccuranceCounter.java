import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class OccuranceCounter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Ask the user to enter a string
        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        // Create a HashMap to store character counts
        Map<Character, Integer> countMap = new HashMap<>();

        // Loop through each character
        for (char ch : input.toCharArray()) {
            if (ch != ' ') { // skip spaces
                countMap.put(ch, countMap.getOrDefault(ch, 0) + 1);
            }
        }

        // Print the character occurrences
        System.out.println("\nCharacter Occurrences:");
        for (Map.Entry<Character, Integer> entry : countMap.entrySet()) {
            System.out.println("'" + entry.getKey() + "' = " + entry.getValue());
        }

        scanner.close();
    }
}
