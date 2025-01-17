package Week12.example1;

public class LowBatteryWarning implements Observer{
    private static final int LOW_BATTERY = 30;
    private Battery battery;

    public LowBatteryWarning(Battery battery) {
        this.battery = battery;
    }

    public void update(){
        int level = battery.getLeve();
        if( level < LOW_BATTERY){
            System.out.println("<WARNING> Low Battery: " + level + "Compared with " + LOW_BATTERY);
        }
    }
}
