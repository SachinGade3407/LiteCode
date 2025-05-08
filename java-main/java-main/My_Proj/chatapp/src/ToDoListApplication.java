import java.util.ArrayList;
import java.util.Scanner;

class Task {
    String description;
    boolean completed;

    public Task(String description) {
        this.description = description;
        this.completed = false;
    }
}

class ToDoList {
    ArrayList<Task> tasks;

    public ToDoList() {
        this.tasks = new ArrayList<>();
    }

    public void addTask(Task task) {
        tasks.add(task);
        System.out.println("Task added: " + task.description);
    }

    public void markAsCompleted(int index) {
        if (index >= 0 && index < tasks.size()) {
            Task task = tasks.get(index);
            task.completed = true;
            System.out.println("Task marked as completed: " + task.description);
        } else {
            System.out.println("Invalid task index.");
        }
    }

    public void displayTasks() {
        System.out.println("To-Do List:");
        for (int i = 0; i < tasks.size(); i++) {
            Task task = tasks.get(i);
            System.out.println((i + 1) + ". " + task.description + " - " + (task.completed ? "Completed" : "Not Completed"));
        }
    }
}

public class ToDoListApplication {
    public static void main(String[] args) {
        ToDoList toDoList = new ToDoList();
        try (Scanner scanner = new Scanner(System.in)) {
            while (true) {
                System.out.println("\nMenu:");
                System.out.println("1. Add Task");
                System.out.println("2. Mark Task as Completed");
                System.out.println("3. Display Tasks");
                System.out.println("4. Exit");

                System.out.print("Enter your choice: ");
                int choice = scanner.nextInt();

                switch (choice) {
                    case 1:
                        System.out.print("Enter task description: ");
                        scanner.nextLine();  // Consume the newline character
                        String taskDescription = scanner.nextLine();
                        toDoList.addTask(new Task(taskDescription));
                        break;
                    case 2:
                        System.out.print("Enter the index of the task to mark as completed: ");
                        int taskIndex = scanner.nextInt() - 1;  // Adjust for 0-based indexing
                        toDoList.markAsCompleted(taskIndex);
                        break;
                    case 3:
                        toDoList.displayTasks();
                        break;
                    case 4:
                        System.out.println("Exiting the To-Do List Application. Thank you!");
                        System.exit(0);
                        break;
                    default:
                        System.out.println("Invalid choice. Please enter a valid option.");
                }
            }
        }
    }
}
