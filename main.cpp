//Weather app
//Name:Suji Priya.S 
//College Name:Vivekanandha College of Engineering for Women 
#include <iostream>
#include <string>

// Weather class
class Weather {
private:
    std::string city;
    double temperature;
    double humidity;

public:
    // Constructor
    Weather(const std::string& city, double temperature, double humidity)
        : city(city), temperature(temperature), humidity(humidity) {}

    // Getters
    std::string getCity() const {
        return city;
    }

    double getTemperature() const {
        return temperature;
    }

    double getHumidity() const {
        return humidity;
    }

    // Setters
    void setTemperature(double temperature) {
        this->temperature = temperature;
    }

    void setHumidity(double humidity) {
        this->humidity = humidity;
    }

    // Display weather information
    void display() const {
        std::cout << "Weather in " << city << ":" << std::endl;
        std::cout << "Temperature: " << temperature << " degrees Celsius" << std::endl;
        std::cout << "Humidity: " << humidity << "%" << std::endl;
    }
};

int main() {
    std::string city;
    double temperature, humidity;

    // Get weather information from the user
    std::cout << "Enter city: ";
    std::getline(std::cin, city);

    std::cout << "Enter temperature (in degrees Celsius): ";
    std::cin >> temperature;

    std::cout << "Enter humidity (in percentage): ";
    std::cin >> humidity;

    // Create a Weather object
    Weather weather(city, temperature, humidity);

    // Display weather information
    weather.display();

    // Update weather information
    double newTemperature, newHumidity;

    std::cout << "Enter new temperature (in degrees Celsius): ";
    std::cin >> newTemperature;

    std::cout << "Enter new humidity (in percentage): ";
    std::cin >> newHumidity;

    weather.setTemperature(newTemperature);
    weather.setHumidity(newHumidity);

    // Display updated weather information
    weather.display();

    return 0;
}