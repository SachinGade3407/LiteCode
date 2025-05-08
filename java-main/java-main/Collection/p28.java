import java.util.*;
class Movie{
        String movieName=null;
	double totColl=0.0;
        float imtdbRating=0.0f;
        Movie(String movieName,double totColl,float imtdbRating){
                this.moiveName=movieName;
                this.totColl=totColl;
		this.imtdbRating=imtdbRating;
        }
        public String toString(){
                return "{" + movieName + "," + totColl + "," + imdbRating + "}";
        }

}
class SortByName implements Comparator{
        public int compare(Object obj1,Object obj2){
                return ((Movies)obj1.movieName.compareTo((Movies)obj2).movieName);
        }
}
class SortByColl implements Comparator{
	public int compare(Object obj1,Object obj2){
	return (int)(((Movies).obj1).totColl)-(((Movies)obj2).totColl);
	}
}
class SortByIMDB implements Comparator{
	public int compare(Object obj1,Object obj2){
		return (int)(((Movies)obj1).imdbRating)-(((Movies)obj2).imdbRating);
	}
}
class ListSortDemo{
        public static void main(String[]args){
                ArrayList al=new ArrayList();
                al.add(new Employee("KGF",2000.02,200.5f));
                al.add(new Employee("ABCD",233.2000,30002.1f));
                al.add(new Employee("OMG",1155.2,2230.1f));
                al.add(new Employee("RRR",1542.124,15.12f));
                System.out.println(al);
                Collections.sort(al,new SortByName());
                System.out.println(al);
                Collections.sort(al,new SortByColl());
                System.out.println(al);
                Collections.sort(al,new SortByIMDB());
                System.out.println(al);
        }

}
