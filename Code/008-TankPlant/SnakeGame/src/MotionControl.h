// MotionControl.h
#ifndef MOTIONCONTROL_H
#define MOTIONCONTROL_H

class MotionControl {
public:
    MotionControl(int leftSpeedPin, int leftDirPin, int rightSpeedPin, int rightDirPin);
    void drive(char direction, int speed);
    void rotate(char direction, int speed);
    void curve(char direction, char toward, int lowSpeed, int highSpeed);
    void direct(int leftSpeed, int rightSpeed);
    void stop();
    void setSpeedThreshold(int threshold);

    bool leftMotorReversed = false;    // New flag for left motor polarity
    bool rightMotorReversed = false;   // New flag for right motor polarity

private:
    int _leftSpeedPin;
    int _leftDirPin;
    int _rightSpeedPin;
    int _rightDirPin;
    int _speedThreshold = 80;

    void applyMotorPolarity(int& leftSpeed, int& rightSpeed);
};

#endif // MOTIONCONTROL_H
