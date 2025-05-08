abstract class Developer{
	factory Developer(String devType){
		if(devType == "Backend")
			return Backend();
		else if(devType == 'Frontend')
			return Frontend();
		else if(devType == 'Mobile')
			return Mobile();
		else
			return Other();
	}
	void devLang();
}
class Backend implements Developer{
	void devLang(){
		print("NodeJs/Springboot");
	}
}
class Frontend implements Developer{
	void devLang(){
		print("ReactJS/AngularJS");
	}
}
class Mobile implements Developer{
	void devLang(){
		print("Flutter/Android");
	}
}
class Other implements Developer{
	void devLang(){
		print("Testing/Support");
	}
}








