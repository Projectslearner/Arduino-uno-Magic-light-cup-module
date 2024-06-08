### Light Cup Module

#### Project Overview

This project involves creating an interactive light cup module using an Arduino. The light cup module responds to changes in ambient light, creating a dynamic and engaging visual effect. This can be used for various applications such as ambient light sensors, interactive lighting, or educational purposes.

#### Components Needed

1. **Arduino Board**
2. **Light Sensor (e.g., LDR - Light Dependent Resistor)**
3. **LEDs (Multiple)**
4. **Resistors (appropriate values for LEDs and LDR)**
5. **Jumper Wires**
6. **Breadboard**
7. **Cup or Container** (to house the LEDs and sensor)

### Block diagram


#### Instructions

1. **Set Up the Circuit:**
   - Connect the light sensor (LDR) to the analog input pin on the Arduino. One end of the LDR should go to the analog pin, and the other end to 5V, with a resistor connecting the analog pin to GND to form a voltage divider.
   - Connect multiple LEDs to the digital pins of the Arduino, with appropriate resistors in series to limit the current.
   - Place the LEDs and the light sensor inside the cup or container to create a light cup module.

2. **Initialize Pins and Variables:**
   - Define the pins for the LEDs and the light sensor.
   - Initialize variables to store the sensor value and the corresponding LED brightness levels.

3. **Measure Light Intensity:**
   - Continuously read the analog value from the light sensor using the `analogRead()` function.
   - Map the sensor values to LED brightness levels using the `map()` function.

4. **Control LED Brightness:**
   - Use `analogWrite()` to adjust the brightness of the LEDs based on the mapped values from the light sensor.

5. **Create Dynamic Light Effects:**
   - Implement logic to create dynamic lighting effects based on the ambient light levels. For example, increase brightness when the ambient light is low and decrease it when the ambient light is high.

6. **Fine-tune the Delay:**
   - Adjust the delay in the `loop()` function to control the responsiveness of the light cup module.

#### Applications

- **Ambient Light Sensing:** Visualize ambient light levels using LEDs inside a cup or container.
- **Interactive Lighting:** Create interactive lighting setups where the LEDs respond to changes in ambient light.
- **Educational Projects:** Demonstrate concepts related to light sensing, analog-to-digital conversion, and LED control.

---

🌐 [projectslearner.com](https://www.projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

## Made for you with ❣️ from ProjectsLearner