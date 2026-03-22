# FreeCAD + Arduino Precision Knob Stress Tester

Automated durability testing rig for custom-designed plastic control knobs. Combines mechanical CAD design, 3D printing, and Arduino servo automation to cycle knobs under load while tracking revolutions and (soon) current draw for predictive failure analysis.

## Features
- Servo-driven automated cycling of control knobs  
- Real-time OLED display showing total revolutions amassed  
- Precision FreeCAD designs created from digital caliper measurements  
- Fully 3D-printed custom test platform and test knobs  
- Upcoming current monitoring module (code already written) for servo draw and failure prediction  
- Designed for future Amazon sales of superior-performing knobs

## Hardware
- Arduino UNO R4 Minima [ABX00080] 
- TD-8135MG 35KG 360 Degree Continuous Rotation Servo  
- 0.96" OLED Display (SSD1306)  
- Custom 3D-printed rig and knobs (designed in FreeCAD)  
- Digital caliper for real-world translation to CAD workflow  
- (In progress) AITRIP Bidirectional DC Current/Power Monitoring Sensor Module for predictive maintenance

## Demo

![Stress Tester in Action](demo.gif)

## How AI Was Used
- Leveraged AI tools for rapid Arduino code generation, servo timing, OLED integration, and current-monitoring logic  
- Debugged real-time counting and planned failure-detection thresholds

## Tech Stack
- FreeCAD (parametric design + STL export)  
- Arduino IDE + C++  
- 3D printing (FDM)  
- Digital measurement → CAD workflow  
- AI-assisted programming & electronics

## Project Goals
Built to stress-test custom knobs against OEM parts, identify failure points, and iterate designs for higher performance. Demonstrates full-cycle mechanical prototyping, automation, and reliability engineering.

---
Michael Coty Sprouse • Air Force veteran & licensed plumber exploring AI infrastructure careers
