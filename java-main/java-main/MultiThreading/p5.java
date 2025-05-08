class Demo extends Thread{
	public void fun(){
                System.out.println(Thread.currentThread().getName());
	}
}
class MyThread extends Thread{
	public void run(){
		System.out.println("In Run");
		System.out.println(Thread.currentThread().getName());
		Demo obj=new Demo();
		obj.start();
	}
}

class ThreadDemo{
        public static void main(String[]args){
                System.out.println("ThreadDemo:"+ Thread.currentThread().getName());
                MyThread obj=new MyThread();
                obj.start();
	}
}
