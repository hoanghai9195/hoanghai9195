package Session10;

public class Vehicle {
    protected String vehicleNo;//Variable to store vehicle number
    protected String vehicleName;//Variable to store vehicle name
    protected int wheels;//Variable to store number of wheels
    /*
    * Accelerates the vehicle
    *
    * @return void
    */
    public Vehicle(String vID, String vName, int numWheels){
        vehicleNo = vID;
        vehicleName = vName;
        wheels = numWheels;
    }
    public void accelerate(int speed){
        System.out.println("Accelerating at: " + speed + "kmph");
    }

}
