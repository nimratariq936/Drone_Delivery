#include <iostream>
using namespace std;

class DeliveryDrone {
private:
    int droneID;
    string currentLocation;
    string destination;
    string packageNumber;
    string status;

public:
    void setDroneDetails(int id, string loc, string dest, string pkg) {
        droneID = id;
        currentLocation = loc;
        destination = dest;
        packageNumber = pkg;
        status = "Grounded";
    }

    void startDelivery() {
        status = "In Flight";
        cout << "Drone " << droneID << " has taken off!" << endl;
        cout << "Heading from " << currentLocation << " to " << destination << endl;
    }

    void updateLocation(string newLocation) {
        currentLocation = newLocation;
        cout << "Location updated. Currently at: " << currentLocation << endl;
    }

    void completeDelivery() {
        status = "Delivered";
        cout << "Package " << packageNumber << " delivered successfully!" << endl;
    }

    void showDroneStatus() {
        cout << "====== DRONE STATUS ======" << endl;
        cout << "Drone ID: " << droneID << endl;
        cout << "Location: " << currentLocation << endl;
        cout << "Destination: " << destination << endl;
        cout << "Package: " << packageNumber << endl;
        cout << "Status: " << status << endl;
        cout << "==========================" << endl;
    }
};

int main() {
    DeliveryDrone drone1;
    drone1.setDroneDetails(201, "Warehouse Alpha", "Customer Location B", "PKG-5501");
    
    drone1.showDroneStatus();
    drone1.startDelivery();
    drone1.updateLocation("Midpoint Tower");
    drone1.completeDelivery();
    drone1.showDroneStatus();

    return 0;
}