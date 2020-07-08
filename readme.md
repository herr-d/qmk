
# NEO LAYOUT FOR MASSDROP CTRL

This is a fork from the massdrop repository to add the (German) neo keyboard layout.
I updated the previous version such that it now uses the German QWERTZ layout for the language of the OS.
Neo has UTF support which is realized through UTF8 sequences. Windows does not support that without any additonal programs. To get the full support you need to install a program that interprets the UTF sequences. This is only for special keys and I don't use that feature that often. Therefor the higher layers are only sparsely implemented. The first layer is the standard ctrl Layout.

The configuration files are under ```keymaps/herrd_neo_layout```

## Led configuration
To change the order of the different LED presets change the ```*led_setups[]``` variable in:
```
 qmk_firmware/tmk_core/protocol/arm_atsam/led_matrix_programs.c 
```
For more settings see e.g. ```default_md/keymap.c```. There is a dictionary with many comments on settings at the end.
```

led_instruction_t led_instructions[] = {
    ...
```

### Small disclaimer
This does not yet implement the full neo keyboard specification. Only the common key combinations that I need to use. Feel free to send me a more complete version and I will merge it in this repo.

Cheers!

# CTRL

![CTRL](https://massdrop-s3.imgix.net/product-images/massdrop-ntkl-mechanical-keyboard/FP/W6zvr0cTR4KVDY5z8rwp_AI7B6588%20copy%20page.jpg?auto=format&fm=jpg&fit=max&w=700&h=467&dpr=1&q=80)

The Massdrop CTRL is a TKL mechanical keyboard featuring dual USB-C connectors, an integrated Hi-Speed USB 2.0 hub, and fully customizable RGB backlighting and underlighting.

Keyboard Maintainer: [Massdrop](https://github.com/massdrop)  
Hardware Supported: Massdrop, Inc. CTRL PCBs utilizing Microchip's ATSAMD51J18A MCU and USB2422 2-Port USB 2.0 Hi-Speed Hub Controller, and ISSI's IS31FL3733 LED Drivers.  
Hardware Availability: [Massdrop CTRL Mechanical Keyboard](https://www.massdrop.com/buy/massdrop-ctrl-mechanical-keyboard)

Make example for this keyboard (after setting up your build environment):

    make massdrop/ctrl:default

For information on flashing this keyboard, visit the following links:

[Massdrop Loader Releases](https://github.com/Massdrop/mdloader/releases/tag/0.0.1)  
[Massdrop Loader Repository and Instructions](https://github.com/Massdrop/mdloader)

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).