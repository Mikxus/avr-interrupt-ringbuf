
# Uncomment to enable firmware uploading
set(ARDUINO_DEFAULT_BOARD uno)          # Default Board ID, when not specified
# set(ARDUINO_DEFAULT_PORT /dev/ttyACM0)  # Default Port, when not specified.

generate_arduino_firmware(
        example_usage
        SRCS example_usage.ino
        )