class MyThread extends Thread{
	public void run(){
		Thread t=Thread.currentThread();
		System.out.println(t.getName());
	}
}
class ThreadDemo{
	public static void main(String[]args){
		Thread t = Thread.currentThread();
		System.out.println(t.getPriority());
		MyThread obj1=new MyThread();
		obj1.start();

		t.setPriority(7);

		MyThread obj2=new MyThread();
		obj2.start();
	}
}

