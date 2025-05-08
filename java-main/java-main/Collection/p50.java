import java.util.concurrent.*;
class BlockingQueueDemo{
	public static void main(String[]args)throws InterruptedException{
		BlockingQueue bQueue = new ArrayBlockingQueue(3);
		bQueue.offer(10);
		bQueue.offer(20);
		bQueue.offer(30);
		System.out.println(bQueue);
		bQueue.offer(40);
		System.out.println(bQueue);
	}
}

