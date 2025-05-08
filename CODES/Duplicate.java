import java.util.HashSet;
public class Duplicate {

    public static void main(String [] args){
        int [] arr = {1,2,3,4,5,3,2,6,7};
        HashSet <Integer> seen = new HashSet<>();
        for (int num : arr) {
            if(!seen.add(num)){
                System.err.println("Duplicate " + num);
            }
        }

    }
}
