import java.util.Map;
import java.util.HashMap;

public class Sample_TestMaps {
	public static void main(String[] args) {
		Map<String, String> objMap = new HashMap<String, String>();
		objMap.put("Name", "Suzuki");
		objMap.put("Power", "220");
		objMap.put("Type", "2-wheeler");
		objMap.put("Price", "85000");

		System.out.println("Elements of the Map:");
		System.out.println(objMap);

		//create and populate hash map
		HashMap<Integer, String> map = new HashMap<Integer, String>();
		map.put(1, "Java");
		map.put(2, "Python");
		map.put(3, "PHP");
		map.put(4, "SQL");
		map.put(5, "C++");

		System.out.println("Int map: " + map);

		//remove value of key 5
		map.remove(5);
		System.out.println("Int mapa after removing: " + map);
	}
}

