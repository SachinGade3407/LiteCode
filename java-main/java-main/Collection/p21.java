import java.util.*;
class Movie implements Comparable{
	String movieName=null;
	float totColl=0.0f;
	Movie(String movieName,float totColl){
		this.movieName=movieName;
		this.totColl=totColl;
	}
	public int compareTo(Object obj){
		return -(movieName.compareTo(((movie)obj).movieName));
	}
	public String toString(){
		return movieName;
	}
}
class TreeSetDemo{
	public static void main(String[]args){
		TreeSet ts=new TreeSet();
		ts.add(new Movies("ABCD",10.99f));
		ts.add(new Movies("KGF",16.25f));
		ts.add(new Movies("OMG",322.33f));
		ts.add(new Movies("OMG2",15.55f));
		ts.add(new Movies("TIMEPASS",45.25f));
		System.out.println(ts);
	}
}
