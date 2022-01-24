
public class Heartbeat {

	public static void main(String[] args) {
		double time = 0;
		while (time<0) { 
			try {
		Thread.sleep(100);
		time += 0.1;
		System.out.println("time:" + time); 
				}
		
			catch(InterruptedException e) { 
				e.printStackTrace();
			}
		}
		
	}
}
