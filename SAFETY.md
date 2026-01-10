# Safety Notice

This firmware directly controls hardware capable of causing damage, injury, or fire.
Use at your own risk.

## General Warning
- The firmware controls heaters, motors, and power electronics
- Misconfiguration or bugs can result in:
  - Thermal runaway
  - Mechanical crashes
  - Electrical damage
  - Fire hazards

## Intended Use
- For personal, controlled environments only
- Not certified for commercial or unattended operation
- Assumes basic knowledge of 3D printer hardware and firmware

## Thermal Safety
- Thermal runaway protection must remain enabled
- Do not disable temperature limits
- Sensor changes require validation
- Heater behavior must be tested under supervision

## Mechanical Safety
- Respect physical limits of the machine
- Verify endstops, homing, and travel limits
- Do not increase speeds or accelerations blindly
- Test motion changes at low speed first

## Electrical Safety
- Ensure proper wiring and grounding
- Do not exceed board or PSU specifications
- Modifications to power handling require review

## Configuration Responsibility
- Users are responsible for their configuration
- Default values are conservative
- Always review changes before flashing

## Testing Guidelines
- First boot after changes must be supervised
- Keep emergency power cutoff accessible
- Never leave the printer unattended during initial tests

## Liability
- No warranty is provided
- The authors are not responsible for damage or injury
- By using this firmware, you accept full responsibility

## Reporting Safety Issues
- Safety-related issues should be reported responsibly
- Include hardware details and reproduction steps
