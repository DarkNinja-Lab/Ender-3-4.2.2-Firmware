# Contributing

This firmware targets a modified Creality Ender-3 platform.
Contributions are welcome if they improve reliability, print quality, or maintainability.

## Project Scope
- Custom Ender-3 firmware
- Hardware-near control logic
- Motion, temperature, and safety handling
- No generic “one-size-fits-all” support

## Supported Hardware
- Creality Ender-3 (modified)
- Documented stepper drivers, sensors, and boards only
- Changes must not assume stock hardware

## Contribution Workflow
1. Fork the repository
2. Create a focused branch (`feature/*`, `fix/*`, `tuning/*`)
3. Implement and test your change
4. Open a Pull Request with:
   - Hardware setup
   - Test results
   - Risks or side effects

## Design Principles
- Safety over features
- Deterministic behavior
- Explicit configuration
- No hidden magic

## Code Guidelines
- Clear, hardware-oriented naming
- No hardcoded machine-specific values
- Avoid timing hacks and busy-waits
- Respect real-time constraints
- Comments explain *why*, not *what*

## Testing Requirements
- Compile must succeed without warnings
- Test on real hardware (no blind merges)
- Validate:
  - Homing
  - Thermal protection
  - Motion limits
- Include logs, measurements, or prints if relevant

## What Will Not Be Accepted
- Untested changes
- Feature requests without hardware context
- Changes that reduce safety margins
- Abstract refactors without measurable benefit

## Configuration
- New settings must be documented
- Defaults must be safe
- Breaking config changes require migration notes

## Documentation
- Update README if behavior changes
- Firmware behavior must be reproducible
- Hardware assumptions must be explicit

## License
By contributing, you agree that your contributions are licensed under the project license.
