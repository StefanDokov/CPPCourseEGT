#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <memory>
#include <exception>
// #include <unistd.h>

struct RoadSegment {
    double begining; // meters
    int minSpeed; // km/h
    int maxSpeed; // km/h

    // int holes; //0 1
    int hiddenDanger;  //...
};

class BaseRoad {
public:
    //virtual int minSpeedAt(double meters) const = 0;
    //virtual int maxSpeedAt(double meters) const = 0;
    virtual int totalLength() const = 0;
    // virtual int getHoles() const = 0;
    //virtual double getDamagePercent(double meters, int speed) const = 0;

    virtual ~BaseRoad() {};
};

class SimpleRoad : public BaseRoad {
public:
    SimpleRoad(double len, int min, int max) {
        this->lenMeters = len;
        this->minSpeed = min;
        this->maxSpeed = max;
    }
    int totalLength() const override {
        return this->lenMeters * this->maxSpeed;
    }
private:
    int minSpeed;
    int maxSpeed;
    double lenMeters;
};

class AnotherRoad : public BaseRoad {
public:
    AnotherRoad(int l, int mi, int ma, int h) {
        this->lengh = l;
        this->mina = mi;
        this->maxa = ma;
        this->hols = h;
    }
    int totalLength() const override {
        return this->lengh + this->hols;
    }

private:
    int lengh;
    int mina;
    int maxa;
    int hols;
};
std::unique_ptr<BaseRoad> roadFactory(std::string choice) {
    if (choice == "Simple") {
        double l;
        int min;
        int max;
        std::cout << "Enter length, min speed and max speed" << std::endl;
        std::cin >> l >> min >> max;
        return std::make_unique<SimpleRoad>(l, min, max);
    }
    else if (choice == "Another") {
        int l;
        int min;
        int max;
        int hols;
        std::cout << "Enter length, min speed and max speed" << std::endl;
        std::cin >> l >> min >> max >> hols;
        return std::make_unique<AnotherRoad>(l, min, max,hols);
    }
    else{

    
        return nullptr; // Handle invalid choice as needed
    }
}
class CombineRoad : public BaseRoad {
public:

private:
    std::vector<BaseRoad*> segments;
};

class Road {
public:
    Road(double meters, int numSegments) {
        double segLen = meters / numSegments;
        for (int i = 0; i < numSegments; ++i) {
            int maxSpeed = 50 + rand() % 50;
            segments.push_back(RoadSegment{
                    i * segLen,
                    maxSpeed - 10,
                    maxSpeed,
                });
        }
        segments.push_back(RoadSegment{ meters, 0, 0 });
    }
    int minSpeedAt(double meters) const {
        return getSegmentAt(meters)->minSpeed;
    }
    int maxSpeedAt(double meters) const {
        return getSegmentAt(meters)->maxSpeed;
    }
    int totalLength() const {
        return segments[segments.size() - 1].begining;
    }
private:
    const RoadSegment* getSegmentAt(double meters) const {
        if (meters >= totalLength()) {
            return NULL;
        }
        for (int i = 0; i < segments.size(); ++i) {
            if (segments[i].begining <= meters &&
                segments[i + 1].begining > meters) {
                return &segments[i];
            }
        }
        return NULL;
    }

    std::vector<RoadSegment> segments;
};

class Car {
public:
    Car(std::string name) : road(NULL), name(name), meters(0) {}
    void assignRoad(Road* road) {
        if (this->road != NULL) {
            throw "can't override road";
        }
        this->road = road;
    }
    bool hasFinished() {
        return road == NULL;
    }
    void tick(double sec) {
        if (hasFinished()) {
            return;
        }

        int maxSpeed = road->maxSpeedAt(meters);
        int roadLen = road->totalLength();
        double dist = maxSpeed * (sec / 3600) * 1000;
        std::cout << "Car " << this->name << " traveled " << dist <<
            " with " << maxSpeed << std::endl;
        meters += dist;
        if (meters >= roadLen) {
            std::cout << "Car " << this->name << " reached end of road"
                << std::endl;
            road = NULL;
            meters = 0;
        }
        else {
            std::cout << "Car " << this->name << " at "
                << meters << "/" << roadLen << " on road" << std::endl;
        }
    }
private:
    std::string name;
    Road* road;
    double meters;
};

class Controller {
public:
    Controller() : timerInterval(10) {}

    void addCar() {
        // Car *p = new Car(unique_name());
        // cars.emplace_back(p);
        std::unique_ptr<Car> p = std::make_unique<Car>(unique_name());
        cars.push_back(std::move(p));
    }
    void addRoad() {
        roads.emplace_back(std::make_unique<Road>(1000, 2));
    }

    void loop() {
        for (auto& car : cars) {
            if (car->hasFinished()) {
                car->assignRoad(roads[rand() % roads.size()].get());
            }
        }
        for (auto& car : cars) {
            car->tick(timerInterval);
        }
    }
private:
    std::string unique_name() {
        std::ostringstream os;
        os << "car-id-" << carId++;
        return os.str();
    }

    int carId;

    double timerInterval;
    std::vector<std::unique_ptr<Car>> cars;
    std::vector<std::unique_ptr<Road>> roads;
};

int main() {
    //Controller ctl;
    //ctl.addCar();
    //ctl.addRoad();

    //for (int i = 0; i < 10; ++i) {
    //    ctl.loop();
    //    // sleep(1);
    //}
    std::unique_ptr<BaseRoad> road1 = roadFactory("Simple");
    std::unique_ptr<BaseRoad> road2 = roadFactory("Another");

    std::cout << road1->totalLength() << std::endl;
    std::cout << road2->totalLength() << std::endl;

    return 0;
}