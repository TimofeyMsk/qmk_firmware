# TimofeyMsk !!!
Keymaps suit for Python and SQL in IDE DataSpell (IntelliJ IDEA).

For Keychron Q8 use branch `master`  
For Keychron K11 Max use branch `wireless_playground`  

Frequently commnds:
* `qmk compile -kb keychron/q8/ansi_encoder -km TimofeyMsk`
  
If it's not some files for ChibiOS (error message: `platforms/chibios/platform.mk:102: lib/chibios-contrib/os/common/startup/ARMCMx/compilers/GCC/mk/startup_stm32f4xx.mk: No such file or directory
make: *** Нет правила для сборки цели «lib/chibios-contrib/os/common/startup/ARMCMx/compilers/GCC/mk/startup_stm32f4xx.mk»`)  
Use this:
```
    QMK использует git-подмодули для некоторых зависимостей, в том числе для chibios-contrib. Если вы клонировали репозиторий без инициализации подмодулей, необходимые файлы не будут загружены.
    
    Решение:
    
    1. В корне репозитория QMK выполните:
    
    bash
    git submodule update --init --recursive
    Эта команда загрузит все подмодули, включая chibios-contrib, и создаст нужные файлы.
    
    2. Повреждённые или неполные файлы в папке lib/chibios-contrib
    Если подмодули были инициализированы, но файлы отсутствуют, возможно, стоит обновить подмодули:
    
    bash
    git submodule update --recursive --remote
```





# Quantum Mechanical Keyboard Firmware

[![Current Version](https://img.shields.io/github/tag/qmk/qmk_firmware.svg)](https://github.com/qmk/qmk_firmware/tags)
[![Discord](https://img.shields.io/discord/440868230475677696.svg)](https://discord.gg/qmk)
[![Docs Status](https://img.shields.io/badge/docs-ready-orange.svg)](https://docs.qmk.fm)
[![GitHub contributors](https://img.shields.io/github/contributors/qmk/qmk_firmware.svg)](https://github.com/qmk/qmk_firmware/pulse/monthly)
[![GitHub forks](https://img.shields.io/github/forks/qmk/qmk_firmware.svg?style=social&label=Fork)](https://github.com/qmk/qmk_firmware/)

This is a keyboard firmware based on the [tmk\_keyboard firmware](https://github.com/tmk/tmk_keyboard) with some useful features for Atmel AVR and ARM controllers, and more specifically, the [OLKB product line](https://olkb.com), the [ErgoDox EZ](https://ergodox-ez.com) keyboard, and the Clueboard product line.

## Documentation

* [See the official documentation on docs.qmk.fm](https://docs.qmk.fm)

The docs are powered by [VitePress](https://vitepress.dev/). They are also viewable offline; see [Previewing the Documentation](https://docs.qmk.fm/#/contributing?id=previewing-the-documentation) for more details.

You can request changes by making a fork and opening a [pull request](https://github.com/qmk/qmk_firmware/pulls).

## Supported Keyboards

* [Planck](/keyboards/planck/)
* [Preonic](/keyboards/preonic/)
* [ErgoDox EZ](/keyboards/ergodox_ez/)
* [Clueboard](/keyboards/clueboard/)
* [Cluepad](/keyboards/clueboard/17/)
* [Atreus](/keyboards/atreus/)

The project also includes community support for [lots of other keyboards](/keyboards/).

## Maintainers

QMK is developed and maintained by Jack Humbert of OLKB with contributions from the community, and of course, [Hasu](https://github.com/tmk). The OLKB product firmwares are maintained by [Jack Humbert](https://github.com/jackhumbert), the Ergodox EZ by [ZSA Technology Labs](https://github.com/zsa), the Clueboard by [Zach White](https://github.com/skullydazed), and the Atreus by [Phil Hagelberg](https://github.com/technomancy).

## Official Website

[qmk.fm](https://qmk.fm) is the official website of QMK, where you can find links to this page, the documentation, and the keyboards supported by QMK.
