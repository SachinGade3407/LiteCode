class Animal {
    protected String name;
    public Animal(String name) {
        this.name = name;
    }
    protected void displayName() {
        System.out.println(name);
    }
}
class Dog extends Animal {
    public Dog(String name) {
        super(name); // Corrected "Super" to "super"
    }
}
public class Q12 {
    public int publicint = 1;
    private int privateint = 2; // Changed to private to match its name
    int defaultvar = 3;

    public static void main(String[] args) {
        Dog d1 = new Dog("LUCKY"); // Removed incorrect named argument syntax
        d1.displayName();
    }
}
