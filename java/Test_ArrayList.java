import java.util.ArrayList;

class Test_ArrayList {
	public static void main(String[] args) {
		//Creating a generic ArrayList
		ArrayList<String> arlTest = new ArrayList<String>();

		//Size of arrayList
		System.out.println("Size of ArrayList at creation: " + arlTest.size());

		//Lets add some elements to it
		arlTest.add("A");
		arlTest.add("B");
		arlTest.add("C");
		arlTest.add("D");

		//Size of arrayList
		System.out.println("Size of ArrayList after adding elements: " + arlTest.size());

		//Display all contents of ArrayList
		System.out.println("List of all elements: " + arlTest);

		//Remove some elements from the list
		if (arlTest.contains("D"))
		{
			arlTest.remove("D");
		}

		//Remove element by index
		if (arlTest.size() > 2)
		{
			arlTest.remove(2);
		}

		//Check size after removing elements
		System.out.println("Size of ArrayList after removing: " + arlTest.size());
		System.out.println("List of all elements after removing elements: " + arlTest);
		

	}
}

