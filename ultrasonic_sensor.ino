// Define pins for the ultrasonic sensor
const int trigPin = 9;//trigger pin
const int echoPin = 10;//echo pin

// Define variable for the duration and distance
long duration;
int distance;

void setup() {
  // Set the trigPin as an output and the echoPin as an input
  pinMode(trigPin, OUTPUT); // initializing of trig pin
  pinMode(echoPin, INPUT);

  // Start the serial communication
  Serial.begin(9600);
}

void loop() {
  // Clear the trigPin by setting it LOW
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Set the trigPin HIGH for 10 microseconds to send out the pulse
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echoPin, which returns the time (duration) in microseconds
  duration = pulseIn(echoPin, HIGH);

  // Calculate the distance in centimeters
  distance = duration * 0.034 / 2;

  // Print the distance on the serial monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Add a short delay before repeating the measurement
  delay(500);
}
