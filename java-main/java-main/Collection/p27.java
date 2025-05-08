import java.util.*;
class Employee{
        String empName=null;
        float sal=0.0f;
        Employee(String empName,float sal){
                this.empName=empName;
                this.sal=sal;
        }
        public String toString(){
                return "{" + empName + ":" + sal + "}";
        }

}
class SortByName implements Comparator<Employee>{
        public int compare(Employee obj1,Employee obj2){
                return obj1.empName.compareTo(obj2.empName);
        }
}
class SortBySal implements Comparator<Employee>{
        public int compare(Employee obj1,Employee obj2){
                return (int)(obj1.sal-obj2.sal);
        }
}
class ListSortDemo{
        public static void main(String[]args){
                ArrayList <Employee> al=new ArrayList<Employee>();
                al.add(new Employee("Akash",200.5f));
                al.add(new Employee("Raj",30002.1f));
                al.add(new Employee("Ganesh",2230.1f));
                al.add(new Employee("Ram",15.12f));
                System.out.println(al);
		Collections.sort(al,new SortBySal());
                System.out.println(al);
        }

}
