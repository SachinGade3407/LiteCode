class Webinar{

	int StudCount = 1000;
	String TopName = "Placement";
	static int WebinarTime = 3;
	
	void subApp(){
		System.out.println("Student Count = "+ StudCount);
		System.out.println("Topic Name = "+ TopName);
		System.out.println("Webinar Time = "+ WebinarTime);
	}
}
class MainDemo{
	public static void main(String[]args){
		Webinar ses1 = new Webinar();
		Webinar ses2 = new Webinar();

		ses1.subApp();
		ses2.subApp();

		ses2.StudCount = 1500;
		ses2.TopName = "Interview Question";
		ses2.WebinarTime = 3;

		ses1.subApp();
		ses2.subApp();
	}
}


		
		
