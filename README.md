<h1>Arduino Weather Station</h1>

<p>This Arduino Weather Station project utilizes a DHT11 sensor to measure temperature and humidity, displaying the readings on a 16x2 LCD screen. The code is designed to be simple and straightforward, making it an excellent starting point for beginners in Arduino programming.</p>

<h2>Components Used:</h2>
<ul>
  <li>Arduino board</li>
  <li>DHT11 sensor</li>
  <li>16x2 LCD with I2C interface</li>
  <li>Jumper wires</li>
</ul>

<h2>Libraries:</h2>
<ul>
  <li><code>dht11.h</code> for DHT11 sensor communication</li>
  <li><code>Wire.h</code> for I2C communication</li>
  <li><code>LiquidCrystal_I2C.h</code> for interfacing with the LCD</li>
</ul>

<h2>Wiring:</h2>
<ul>
  <li>Connect the DHT11 sensor to pin 2 on the Arduino board.</li>
  <li>Connect the 16x2 LCD with I2C interface to the corresponding pins.</li>
</ul>

<h2>Setup:</h2>
<ol>
  <li>Include the necessary libraries: <code>dht11.h</code>, <code>Wire.h</code>, and <code>LiquidCrystal_I2C.h</code>.</li>
  <li>Define the DHT11 pin and create instances for DHT11 and LCD.</li>
  <li>Initialize the serial communication and LCD.</li>
  <li>In the loop:
    <ul>
      <li>Read temperature and humidity from the DHT11 sensor.</li>
      <li>Convert the readings to strings.</li>
      <li>Display the labels and readings on the LCD.</li>
      <li>Print the readings to the serial monitor.</li>
    </ul>
  </li>
</ol>

<h2>Code Style:</h2>
<ul>
  <li>The code follows a modular structure, with clear sections for setup and loop.</li>
  <li>Descriptive variable and function names for readability.</li>
  <li>Commented lines explain the purpose of each code block.</li>
  <li>Adequate delay (2000 ms) between readings to avoid rapid updates.</li>
</ul>

<h2>Usage:</h2>
<ol>
  <li>Upload the code to your Arduino board using the Arduino IDE.</li>
  <li>Connect the DHT11 sensor and LCD as per the specified wiring.</li>
  <li>Open the serial monitor to view real-time temperature and humidity readings.</li>
  <li>The LCD will display temperature and humidity with corresponding labels.</li>
</ol>

<p>This project serves as a basic weather station, providing an accessible platform for learning Arduino programming and sensor interfacing. Feel free to modify and expand upon this code for additional features and functionalities.</p>
